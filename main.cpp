#include <iostream>
#include "developer.h"
#include "techlead.h"
using namespace std;
int main() {
    int choice;
    do {
        cout << "\nКомандный проект: сборник расчётов\n";
        cout << "1. Площадь треугольника\n";
        cout << "2. Периметр треугольника\n";
        cout << "3. Центростремительное ускорение\n";
        cout << "4. Центростремительная сила\n";
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
            case 3: {
                double v, r;
                cout << "Введите v и r: ";
                cin >> v >> r;
                cout << "Ускорение = " << centripetalAccel(v, r) << "\n";
                break;
            }
            case 4: {
                double m, v, r;
                cout << "Введите m, v, r: ";
                cin >> m >> v >> r;
                cout << "Сила = " << centripetalForce(m, v, r) << "\n";
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
