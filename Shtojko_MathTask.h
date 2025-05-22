#ifndef _SHTOJKO_MATHTASK_H
#define _SHTOJKO_MATHTASK_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Функция проверки корректности ввода (число >= 0)
bool UserInput(const string& input) {
    if (input.empty()) return false;
    
    try {
        long long number = stoll(input);
        if (number < 0) return false; // Проверка на отрицательные значения
    }
    catch (...) {
        return false;
    }
    return true;
}

// Метод ввода числовых данных
void EnterDigit(long long& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    
    while (!UserInput(raw_input)) {
        cout << "Ошибка! Повторите ввод.\n";
        cout << label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoll(raw_input);
}

// Функция конвертации байтов в мегабайты и гигабайты
void ConvertBytes(long long bytes) {
    if (bytes < 0) {
        cerr << "Ошибка: объем не может быть отрицательным!" << endl;
        return;
    }

    const long long KB = 1024;
    const long long MB = KB * 1024;
    const long long GB = MB * 1024;

    cout << fixed << setprecision(6);
    cout << "Объем в мегабайтах (MB): " << static_cast<double>(bytes) / MB << endl;
    cout << "Объем в гигабайтах (GB): " << static_cast<double>(bytes) / GB << endl;
}

#endif // _SHTOJKO_MATHTASK_H