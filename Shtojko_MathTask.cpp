#include <iostream>
#include "Shtojko_MathTask.h"
#include <iomanip>  // Для форматированного вывода (setprecision)

using namespace std;

int main() {
    long long B;  // Объём в байтах (может быть большим)
    
    cout << "Введите объем информации в байтах (B): ";
    cin >> B;

    // Проверка на отрицательное значение
    if (B < 0) {
        cerr << "Ошибка: объем не может быть отрицательным!" << endl;
        return 1;
    }

    // Вычисление в мегабайтах (1 MB = 1024 * 1024 B)
    double MB = static_cast<double>(B) / (1024 * 1024);

    // Вычисление в гигабайтах (1 GB = 1024 * 1024 * 1024 B)
    double GB = static_cast<double>(B) / (1024 * 1024 * 1024);

    // Вывод результатов с точностью до 6 знаков после запятой
    cout << fixed << setprecision(6);
    cout << "Объем в мегабайтах (MB): " << MB << endl;
    cout << "Объем в гигабайтах (GB): " << GB << endl;

    return 0;
}