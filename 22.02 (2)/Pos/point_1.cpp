#include <iostream>
#include "point.h"
using namespace std;

//Методы

	//Ввод x
void Point::InputX() {
	cout << "Введите x: ";
	cin >> x;
	cin.ignore();
}
//Ввод y
void Point::InputY() {
	cout << "Введите y: ";
	cin >> y;
	cin.ignore();
}
//Ввод z
void Point::InputZ() {
	cout << "Введите z: ";
	cin >> z;
	cin.ignore();
}

//Вывод координат
void Point::OutputCoordinate() const {
	cout << "Координаты точки: "
		<< "x = " << x
		<< ", y = " << y
		<< ", z = " << z << endl;
};