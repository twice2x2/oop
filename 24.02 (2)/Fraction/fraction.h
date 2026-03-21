#pragma once
#include <iostream>
#include <cmath>    

using namespace std;

class Fraction {
private:
    float numerator;    // числитель
    float denominator;  // знаменатель

    //Статический счётчик дробей
    static int objectCount;

    //Метод сокращения дроби
    void reduce();

public:
    //Конструктор по умолчанию
    Fraction() : Fraction(0.0f, 1.0f) {
    }

    //Основной конструктор 
    Fraction(float num, float den);

    // Конструктор копирования
    Fraction(const Fraction& other);

    //Деструктор
    ~Fraction();

    //Статический метод для получения количества дробей
    static int getObjectCount();

    //Геттеры
    float getNumerator() const { return numerator; }
    float getDenominator() const { return denominator; }

    //Сеттеры
    void setNumerator(float num) { numerator = num; }
    void setDenominator(float den);

    //Методы ввода
    void InputNumerator();
    void InputDenominator();

    //Методы операций
    Fraction Plus(const Fraction& other) const;
    Fraction Minus(const Fraction& other) const;
    Fraction Multiplication(const Fraction& other) const;
    Fraction Division(const Fraction& other) const;

    //Вывод дроби
    void Print() const;
};