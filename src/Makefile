.PHONY: all build install uninstall dist dvi clean

CC=gcc
FLAGS=-std=c11 -Wall -Werror -Wextra
FILE=calc
APP=Calculator
LIBS_MACOS= -L /usr/local/lib -lcheck
LIBS_LINUX= -lcheck -lm -lpthread -lrt -lsubunit -D_GNU_SOURCE
 
OS = $(shell uname)
ifeq ($(OS), Darwin)
OPEN=open
LIBS=$(LIBS_MACOS)
APP_FILE=Calculator.app
# LEAK_CHECK = leaks --atExit -- ./test
endif
 
ifeq ($(OS), Linux)
OPEN=xdg-open
LIBS=$(LIBS_LINUX)
APP_FILE=Calculator
# LEAK_CHECK = valgrind --leak-check=full --show-leak-kinds=all -s ./test
endif

all: install

build: clean
	mkdir build
	cp $(APP).pro main.cpp mainwindow.cpp mainwindow.h mainwindow.ui build
	cp credit.cpp credit.h credit.ui build
	cp deposit.cpp deposit.h deposit.ui build
	cp graphwindow.cpp graphwindow.h graphwindow.ui build
	cp qcustomplot.cpp qcustomplot.h build
	cp $(FILE).c $(FILE).h build
	cd build; qmake $(APP).pro
	make -C build
	cd build; rm -rf *.c *.h *.cpp *.ui

install: build
	-mkdir Smart_Calc_v1.0
	cp -rf build/$(APP_FILE) Smart_Calc_v1.0/
	make clean

uninstall:
	-rm -rf Smart_Calc_v1.0/

dist:
	mkdir archive_$(APP)/
	mkdir archive_$(APP)/src
	cp Makefile *.c *.h *.pro* *.cpp Doxyfile *.ui archive_$(APP)/src/
	tar cvzf archive_$(APP).tgz archive_$(APP)/
	-rm -rf archive_$(APP)/

dvi:
	doxygen
	$(OPEN) generated-docs/html/index.html


$(FILE).o_with_gcov: $(FILE).c
	$(CC) $(FLAGS) -c $(FILE).c --coverage

$(FILE).a_with_gcov: $(FILE).o_with_gcov
	ar -rcs $(FILE).a $(FILE).o

tests: clean $(FILE).a_with_gcov
	$(CC) tests.c $(FILE).a -o s21_test $(LIBS) --coverage
	./s21_test
	-rm -f s21_test.gcda s21_test.gcno s21_test.c

$(FILE).a: $(FILE).c
	$(CC) -c $(FILE).c
	ar -rcs $(FILE).a $(FILE).o

gcov_report: tests
	gcovr --html --html-details -o report.html
	$(OPEN) report.html

lcov: tests
	lcov -t “test” -o lcov_test.info -c -d .
	genhtml -o report lcov_test.info
	$(OPEN) ./report/index.html

clean:
	-rm -rf *.o *.a
	-rm -rf *.gcda *.gcno *.info
	-rm -rf report*
	-rm -rf s21_test
	-rm -rf ./build
	-rm -rf ./generated-docs
	-rm -rf *.tgz

style: clean
	cp ../materials/linters/.clang-format .
# @cppcheck --enable=all --suppress=missingIncludeSystem ./$(FILE).c
# @cppcheck --enable=all --suppress=missingIncludeSystem ./$(FILE).h
	clang-format -n ./$(FILE).c
	clang-format -n ./$(FILE).h
# @python3 ../materials/linters/cpplint.py --extensions=c ./mainwindow.cpp
# @python3 ../materials/linters/cpplint.py --extensions=c ./mainwindow.h
	rm .clang-format

clang:
	cp ../materials/linters/.clang-format .
	clang-format -i ./$(FILE).*
	rm .clang-format

valgrind: clean $(FILE).a_with_gcov
	$(CC) tests.c $(FILE).a -o s21_test $(LIBS) --coverage
	valgrind --leak-check=full --show-leak-kinds=all -s ./s21_test
	rm -f s21_test.gcda s21_test.gcno s21_test.c