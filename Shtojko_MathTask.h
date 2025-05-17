#ifndef SURNAME_MATHTASK_H
#define SURNAME_MATHTASK_H

#include <string>
#include <stdexcept>
#include <cctype>

using namespace std;

// Функция контроля ввода данных
bool UserInput(const string& input) {
    if (input.empty()) return false;

    // Проверка на отрицательные числа (если они недопустимы)
    if (input[0] == '-') return false;

    // Проверка на наличие нецифровых символов
    for (char c : input) {
        if (!isdigit(c)) {
            return false;
        }
    }

    return true;
}

// Метод ввода данных
void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);

    while (!UserInput(raw_input)) {
        cout << "Ошибка ввода! Пожалуйста, введите целое положительное число.\n";
        cout << label << " = ";
        getline(cin, raw_input);
    }

    varLink = stoi(raw_input);
}

// Метод вычисления площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB;
}

#endif
