#ifndef SRC_CALC_H_
#define SRC_CALC_H_

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EPS 1e-7

typedef union Lexem {
    double num;
    char oper;
} Lexem;

typedef enum Type { NUMBER, OPERATION } Type;

typedef struct Deque {
    Lexem value;
    Type type_d;
    struct Deque *next;
    struct Deque *prev;
} Deque;

/**
 * @brief Создает новый объект деки
 *
 * @return Deque* Указатель на новый объект деки
 */
Deque *create_deque();

/**
 * @brief Добавляет объект после головного объекта деки
 *
 * @param head_deque Указатель на головной объект деки
 * @param is_num Булева переменная: указывает является ли объект числом
 * @param val Значение объекта
 */
void push_f_deque(Deque **head_deque, bool is_num, void *val);

/**
 * @brief Добавляет объект перед головным объектом деки
 *
 * @param head_deque Указатель на головной объект деки
 * @param is_num Булева переменная: указывает является ли объект числом
 * @param val Значение объекта
 */
void push_b_deque(Deque **head_deque, bool is_num, void *val);

/**
 * @brief Возвращает головной объект деки
 *
 * @param head_deque Указатель на головной объект деки
 * @return Lexem Головной объект деки
 */
Lexem pop_deque(Deque **head_deque);

/**
 * @brief Удаляет головной объект деки
 *
 * @param head_deque Указатель на головной объект деки
 */
void delete_deque(Deque **head_deque);

/**
 * @brief Обрабатывает выражение во входной строке и возвращает результат
 *
 * @param in Входная строка с выражением
 * @param is_error Указатель на булеву переменную, которая хранит информацию
 * есть ли ошибка в выражении или нет
 * @param x Значение X, если он есть. Если нет, то содержит 0.
 * @return double Результат расчета выражения.
 */
double smart_calc(char *in, bool *is_error, double x);

/**
 * @brief Заменяет во входящей строке подстроки sin, cos  и т.д. на одну букву
 * s, c и т.д.
 *
 * @param in Входящая строка
 * @param out Исходящая строка
 */
void replace_func(char *in, char *out);

/**
 * @brief Чекер - проверяет строку с выражением на корректность
 *
 * @param input Входящая строка с выражением
 * @return int Возвращает 0 в случае отсутствия ошибки или 1 если есть ошибка в
 * выражении
 */
int validation(char *input);

/**
 * @brief Переводит входящую строку в формат деки в виде обратной польской
 * нотации
 *
 * @param in Входящая строка
 * @param out Указатель на деку, в которую будут сохраняться объекты  строки в
 * виде обратной польской нотации
 * @param x Значение икса
 */
void translate_to_rpn(char *in, Deque **out, double x);

/**
 * @brief Вычисляет результат выражения во входной строке
 *
 * @param out Дека с выражением в виде обратной польской нотации
 * @return double Результат вычисления выражения
 */
double calc_expr(Deque *out);

#endif  // SRC_CALC_H_
