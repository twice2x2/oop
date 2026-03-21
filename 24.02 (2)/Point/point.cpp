#include <iostream>
#include "point.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // Конструктор по умолчанию
    Point p1;
    cout << "Точка по умолчанию: ";
    p1.OutputCoordinate();
    cout << endl;

    // Ввод с клавиатуры
    cout << "\nВведите координаты точки:\n";
    p1.InputX();
    p1.InputY();
    p1.InputZ();
    cout << "Введённая точка: ";
    p1.OutputCoordinate();
    cout << endl;

    // Конструктор с параметрами
    Point p2(5, -3, 8);
    cout << "Точка с параметрами: ";
    p2.OutputCoordinate();
    cout << endl;

    //Счетчик
    cout << "Всего объектов: " << Point::getCount();

    return 0;
}