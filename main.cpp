#include <iostream>
using namespace std;
#include "developer.h"
int main() {
    int choice;
    do {
        cout << "\nКалькулятор: сборник расчётов67\n";
        cout << "1. Площадь треугольника\n";
        cout << "2. Периметр треугольника\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
 case 1: {
                double a, h;
                cout << "Введите a и h: ";
                cin >> a >> h;
                cout << "Площадь = " << triangleArea(a, h) << "\n";
                break;
            }
            case 2: {
                double a, b, c;
                cout << "Введите a, b, c: ";
                cin >> a >> b >> c;
                cout << "Периметр = " << trianglePerimeter(a, b, c) << "\n";
                break;
            }
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}
