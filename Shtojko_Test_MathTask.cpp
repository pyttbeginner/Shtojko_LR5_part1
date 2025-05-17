#include <iostream>

#include "CUTE/cute/cute.h"
#include "CUTE/cute/cute_runner.h"
#include "CUTE/cute/ide_listener.h"
#include "Shtojko_MathTask.h"

using namespace cute;
using namespace std;

// Тест для CalcRectangleArea
void testCalcRectangleArea() {
    int a = 3;
    int b = 5;
    int expected = 15;
    int actual = CalcRectangleArea(a, b);
    ASSERT_EQUAL(expected, actual);
}

// Тест для пустого ввода
void testUserInput_Empty() {
    string str = "";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

// Тест для нецифровых символов
void testUserInput_Letter() {
    string str = "a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

// Тест для цифро-буквенных значений
void testUserInput_DigitLetterValue() {
    string str = "5a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

// Тест для отрицательных значений
void testUserInput_NegativeValue() {
    string str = "-5";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

int main() {
    suite s;

    // Добавляем все тесты
    s.push_back(CUTE(testCalcRectangleArea));
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testUserInput_Letter));
    s.push_back(CUTE(testUserInput_DigitLetterValue));
    s.push_back(CUTE(testUserInput_NegativeValue));

    // Запускаем тесты
    ide_listener<> listener;
    makeRunner(listener)(s, "All Rectangle Tests");

    return 0;
}
