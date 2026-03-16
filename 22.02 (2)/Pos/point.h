#pragma once
#include <iostream>
using namespace std;

//Класс Точка
class Point {

private:
	//Атрибуты
	int x;
	int y;
	int z;
public:
	// Конструктор по умолчанию
	Point() : x(0), y(0), z(0) {}

	// Конструктор с параметрами
	Point(int xx, int yy, int zz) : x(xx), y(yy), z(zz) {}

	// Геттеры 
	inline int getX() const { return x; }
	inline int getY() const { return y; }
	inline int getZ() const { return z; }

	// Сеттеры 
	inline void setX(int xx) { x = xx; }
	inline void setY(int yy) { y = yy; }
	inline void setZ(int zz) { z = zz; }

	// Методы ввода
	void InputX();
	void InputY();
	void InputZ();

	// Вывод координат
	void OutputCoordinate() const;
};