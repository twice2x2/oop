#include <iostream>
#include "point.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "=== Тестирование класса Point ===\n\n";

    //Конструктор по умолчанию
    Point p1;
    cout << "Точка по умолчанию: ";
    p1.OutputCoordinate();
    cout << endl;

    //Ввод с клавиатуры
    cout << "\nВведите координаты точки:\n";
    p1.InputX();
    p1.InputY();
    p1.InputZ();
    p1.OutputCoordinate();

    //Конструктор с параметрами
    Point p2(5, -3, 8);
    cout << "Точка с параметрами" << endl;
    p2.OutputCoordinate();

    return 0;
}