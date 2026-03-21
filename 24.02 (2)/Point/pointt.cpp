#include <iostream>
#include "point.h"

using namespace std;

//Инициализация счетчика
int Point::count = 0;

//Возвращает счетчик
int Point::getCount() {
    return count++;
}

//Ввод координаты X
void Point::InputX() {
    cout << "Введите x: ";
    cin >> x;
    cin.ignore();       
}

//Ввод координаты Y
void Point::InputY() {
    cout << "Введите y: ";
    cin >> y;
    cin.ignore();
}

//Ввод координаты Z
void Point::InputZ() {
    cout << "Введите z: ";
    cin >> z;
    cin.ignore();
}

// Вывод координат точки
void Point::OutputCoordinate() const {
    cout << "Координаты точки: "
        << "x = " << x << ", y = " << y << ", z = " << z << endl;
}
