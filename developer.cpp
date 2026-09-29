#include "developer.h"
#include <iostream>
using namespace std;

double triangleArea(double a, double h) {
    return a * h / 2.0;
}

double trianglePerimeter(double a, double b, double c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ошибка: треугольник с такими сторонами не существует\n";
        return 0;
    }
    return a + b + c;
}