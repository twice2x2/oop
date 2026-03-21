#include "fraction.h"
#include <iostream>
#include <cmath>

using namespace std;

//Инициализация счётчика
int Fraction::objectCount = 0;

//Основной конструктор
Fraction::Fraction(float num, float den) : numerator(num), denominator(den != 0 ? den : 1.0f) {
    objectCount++;          
    reduce();              
}

//Конструктор копирования
Fraction::Fraction(const Fraction& other) : numerator(other.numerator), denominator(other.denominator) {
    objectCount++;
}

//Деструктор
Fraction::~Fraction() {
    objectCount--;          
}

//Вывод счетчика
int Fraction::getObjectCount() {
    return objectCount;
}

// Сокращение дроби 
void Fraction::reduce() {
    float a = abs(numerator);
    float b = abs(denominator);

    while (b != 0) {
        float t = b;
        b = fmod(a, b);
        a = t;
    }
    float gcd = a;

    numerator /= gcd;
    denominator /= gcd;

    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}


//Сеттер знаменателя с защитой
void Fraction::setDenominator(float den) {
    if (den == 0.0f) {
        cout << "Знаменатель 0!\n";
        denominator = 1.0f;
    }
    else {
        denominator = den;
    }
    reduce();
}

//Методы ввода
void Fraction::InputNumerator() {
    cout << "Введите числитель: ";
    cin >> numerator;
}

void Fraction::InputDenominator() {
    cout << "Введите знаменатель: ";
    cin >> denominator;
    if (denominator == 0.0f) {
        cout << "Знаменатель не может быть 0! Установлено 1.0\n";
        denominator = 1.0f;
    }
    reduce();
}


//Вывод дроби
void Fraction::Print() const {
    if (fabs(denominator - 1.0f) < 1e-6) {
        cout << numerator;
    }
    else {
        cout << numerator << "/" << denominator;
    }
}

//Арифметические операции
Fraction Fraction::Plus(const Fraction& other) const {
    float newNum = numerator * other.denominator + other.numerator * denominator;
    float newDen = denominator * other.denominator;
    return Fraction(newNum, newDen);
}

Fraction Fraction::Minus(const Fraction& other) const {
    float newNum = numerator * other.denominator - other.numerator * denominator;
    float newDen = denominator * other.denominator;
    return Fraction(newNum, newDen);
}

Fraction Fraction::Multiplication(const Fraction& other) const {
    float newNum = numerator * other.numerator;
    float newDen = denominator * other.denominator;
    return Fraction(newNum, newDen);
}

Fraction Fraction::Division(const Fraction& other) const {
    if (other.numerator == 0) {
        cout << "Деление на ноль! Возвращается 0/1\n";
        return Fraction(0, 1);
    }
    float newNum = numerator * other.denominator;
    float newDen = denominator * other.numerator;
    return Fraction(newNum, newDen);
}