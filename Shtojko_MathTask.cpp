#include <iostream>
#include "Shtojko_MathTask.h"

using namespace std;

int main()
{
    int numberA = 0, numberB = 0;
    //enter variable
    getNumber(numberA, "input height A");
    //enter A
    getNumber(numberB, "input height B");

    getOperation(operation, "input operation to perform")

    switch (operation) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                if (std::isnan(result)) {
                    continue; // Пропускаем вывод результата при ошибке деления
                }
                break;
cout << "Результат: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

}