#include "calc.h"

double smart_calc(char* in, bool* is_error, double x) {
    char* temp = calloc(256, sizeof(char));
    replace_func(in, temp);        // заменяем функции на один символ
    *is_error = validation(temp);  // проверяем корректность
    double result = 0.;

    if (!(*is_error)) {
        Deque* out = NULL;
        translate_to_rpn(temp, &out, x);  // переводим в польскую
        if (temp) free(temp);

        while (out->prev) {  // переходим в начало списка
            out = out->prev;
        }

        result = calc_expr(out);  // считаем выражение
    }

    return result;
}

void replace_func(char* in, char* out) {
    char func[][5] = {"sin", "cos", "tan", "asin", "acos", "atan", "sqrt", "ln", "log", "mod"};
    char symbol[] = "sctSCTqlLm";

    for (int i = 0, j = 0; in[i]; i++, j++) {
        if (strchr("sctalm", in[i])) {
            for (int k = 0; k < 11; k++) {
                int len = (int)strlen(func[k]);
                if (strncmp(func[k], in + i, len) == 0) {
                    out[j] = symbol[k];
                    i += len - 1;
                    break;
                }
            }
        } else {
            out[j] = in[i];
        }
    }
}

int validation(char* input) {
    int error = 0;

    int i = 0;
    int bracket = 0;
    int unar = 1;
    int point = 0;
    char c = 0;
    char symbol[] = "+-*/^mcstCSTqlL.0123456789()x";

    while ((c = input[i]) && !error) {
        if (!strchr(symbol, c)) {  // если символ не из множества
            error = 1;
            break;
        }
        if (c == '(') {
            bracket++;
        }
        if (c == ')') {
            bracket--;
        }

        if (strchr("+-", c)) {  // считаем унарные знаки
            unar++;
            if (i && input[i - 1] == '(') {
                unar++;
            }
        } else if (strchr("*/^m", c)) {
            unar++;
        } else if (unar && strchr(".0123456789cstCSTqlL(x", c)) {
            unar = 0;
        }

        if (!strpbrk(input, "0123456789.x")) {  // проверка если нет числа
            error = 1;
            break;
        }

        if (i) {
            if (strchr("+-*/^m(", input[i - 1]) && strchr("*/^m)", c)) {
                error = 1;
                break;
            } else if (strchr("+-*/^m", c) && !input[i + 1]) {  // проверка если после операции ничего нет
                error = 1;
                break;
            } else if (strchr(")", input[i - 1]) && strchr("0123456789.(sctaqlL", c)) {
                error = 1;
                break;
            } else if (strchr("0123456789.x)", input[i - 1]) && strchr("(xsctaqlL", c)) {
                error = 1;
                break;
            } else if ((input[i - 1] == '(' && c == ')') || (input[i - 1] == ')' && c == '(')) {
                error = 1;
                break;
            }
        } else if (strchr("*/^m", c)) {  // если первый символ
            error = 1;
            break;
        }

        if (strchr("+-*/^mcstCSTqlL)", c)) {
            point = 0;
        }

        if (point && !strchr("0123456789", c)) {
            error = 1;
        }

        if (c == '.') {
            point = 1;
        }

        if (unar > 2 || bracket < 0) {
            error = 1;
        }

        if (strchr("cstCSTqlL", c) && input[i + 1] != '(') {
            error = 1;
        }

        i++;
    }

    if (bracket) {
        error = 1;
    }

    return error;
}

void translate_to_rpn(char* in, Deque** out, double x) {
    Deque* stack = NULL;

    char c = 0;
    char oper[] = "+-*/^m(";
    char func[] = "sctSCTqlL";
    char digit[] = "0123456789.";
    int len = (int)strlen(in);
    double unar = 1;

    for (int i = 0; i < len; i++) {
        c = in[i];
        if (i == 0 || (strchr(oper, in[i - 1]) && strchr("+-", c))) {  // обработка унарных знаков
            if (c == '-') {
                unar = -1;
                if (strchr("sctSCTqlL(", in[i + 1])) {
                    push_f_deque(out, true, (void*)&unar);
                    push_f_deque(&stack, false, (void*)&oper[2]);
                    unar = 1;
                }
                continue;
            } else if (c == '+') {
                continue;
            }
        }

        if (strchr(digit, c)) {  // перевод строки в число и запись в аут
            double value = unar * atof(in + i);
            unar = 1;
            push_f_deque(out, true, (void*)&value);

            while (strchr(digit, in[i]) && i < len) {
                i++;
            }
            i--;
        } else if (c == 'x') {
            x *= unar;
            unar = 1;
            push_f_deque(out, true, (void*)&x);
        } else {
            if (c != ')') {
                if (stack) {
                    if (strchr("+-", c)) {  // проверка приоритета +-
                        while (stack) {
                            if (strchr("*/^m+-", stack->value.oper)) {
                                char c_st = pop_deque(&stack).oper;
                                push_f_deque(out, false, (void*)&c_st);
                            } else {
                                break;
                            }
                        }
                    } else if (strchr("*/m", c)) {  // проверка приоритета */m, у ^
                                                    // наивысший приоритет
                        while (stack) {
                            if (strchr("*/^m", stack->value.oper)) {
                                char c_st = pop_deque(&stack).oper;
                                push_f_deque(out, false, (void*)&c_st);
                            } else {
                                break;
                            }
                        }
                    }
                }
                push_f_deque(&stack, false, (void*)&c);
            } else {  // нашли закрывающую скобку
                while (stack->value.oper != '(') {
                    char c_st = pop_deque(&stack).oper;
                    push_f_deque(out, false, (void*)&c_st);
                }
                delete_deque(&stack);  // удаляем открывающую скобку
                if (stack && strchr(func, stack->value.oper)) {  // если в стеке функция, то
                    // перекидываем в аут
                    char c_st = pop_deque(&stack).oper;
                    push_f_deque(out, false, (void*)&c_st);
                }
            }
        }
    }

    while (stack) {  // выгружаем все из стека в выходную строку
        char c_st = pop_deque(&stack).oper;
        push_f_deque(out, false, (void*)&c_st);
    }
}

double calc_expr(Deque* out) {
    double res = 0.;
    char oper[] = "+-*/^m";
    int the_end = 0;
    if (!out->next && !out->prev) {
        res = pop_deque(&out).num;
    }

    while (out) {
        if (out->type_d == OPERATION) {
            char todo = pop_deque(&out).oper;
            if (out->prev == NULL) the_end = 1;

            double x = pop_deque(&out).num;
            double y = 0.;
            double temp = 0.;

            if (strchr(oper, todo)) {  // операции с двумя аргументами
                if (out->prev == NULL) the_end = 1;
                y = pop_deque(&out).num;
                switch (todo) {
                    case '+':
                        temp = x + y;
                        break;
                    case '-':
                        temp = y - x;
                        break;
                    case '*':
                        temp = x * y;
                        break;
                    case '/':
                        temp = y / x;
                        break;
                    case '^':
                        temp = pow(y, x);
                        break;
                    case 'm':
                        temp = fmod(y, x);
                        break;
                }
            } else {  // операции с одним аргументом
                switch (todo) {
                    case 's':
                        temp = sin(x);
                        break;
                    case 'c':
                        temp = cos(x);
                        break;
                    case 't':
                        temp = tan(x);
                        break;
                    case 'S':
                        temp = asin(x);
                        break;
                    case 'C':
                        temp = acos(x);
                        break;
                    case 'T':
                        temp = atan(x);
                        break;
                    case 'q':
                        temp = sqrt(x);
                        break;
                    case 'l':
                        temp = log(x);
                        break;
                    case 'L':
                        temp = log10(x);
                        break;
                }
            }

            if (out) {
                if (the_end) {
                    push_b_deque(&out, true, &temp);
                } else {
                    push_f_deque(&out, true, &temp);
                }
            } else {
                res = temp;
            }
        }
        the_end = 0;
        if (out) {
            out = out->next;
        }
    }

    return res;
}

Deque* create_deque() {
    Deque* temp = (Deque*)calloc(1, sizeof(Deque));
    if (temp) {
        temp->next = NULL;
        temp->prev = NULL;
    }
    return temp;
}

void push_f_deque(Deque** head_deque, bool is_num, void* val) {
    Deque* temp = create_deque();
    if (temp) {
        if (is_num) {
            temp->value.num = *((double*)val);
            temp->type_d = NUMBER;
        } else {
            temp->value.oper = *((char*)val);
            temp->type_d = OPERATION;
        }

        if (*head_deque) {
            if ((*head_deque)->next) {
                temp->next = (*head_deque)->next;
                (*head_deque)->next->prev = temp;
            }
            temp->prev = *head_deque;
            (*head_deque)->next = temp;
        }
        *head_deque = temp;
    }
}

void push_b_deque(Deque** head_deque, bool is_num, void* val) {
    Deque* temp = create_deque();
    if (temp) {
        if (is_num) {
            temp->value.num = *((double*)val);
            temp->type_d = NUMBER;
        } else {
            temp->value.oper = *((char*)val);
            temp->type_d = OPERATION;
        }

        if (*head_deque) {
            if ((*head_deque)->prev) {
                (*head_deque)->prev->next = temp;
                temp->prev = (*head_deque)->prev;
            }
            temp->next = *head_deque;
            (*head_deque)->prev = temp;
        }

        *head_deque = temp;
    }
}

void delete_deque(Deque** head_deque) {
    if ((*head_deque)->next) {
        (*head_deque)->next->prev = (*head_deque)->prev;
    }
    if ((*head_deque)->prev) {
        (*head_deque)->prev->next = (*head_deque)->next;
    }
    Deque* temp = *head_deque;
    if (temp->prev) {
        *head_deque = temp->prev;
    } else {
        if (temp->next) {
            *head_deque = temp->next;
        } else {
            *head_deque = NULL;
        }
    }

    if (temp) free(temp);
}

Lexem pop_deque(Deque** head_deque) {
    Lexem value = {0};
    if ((*head_deque)->type_d == NUMBER) {
        value.num = (*head_deque)->value.num;
    } else {
        value.oper = (*head_deque)->value.oper;
    }

    delete_deque(head_deque);
    return value;
}
