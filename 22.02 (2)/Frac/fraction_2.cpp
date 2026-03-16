#include "fraction.h"
#include <iostream>
using namespace std;

//Ввод числителя
void Fraction::InputNumerator() {
    cout << "Введите числитель: ";
    cin >> numerator;
}

//Ввод знаменателя
void Fraction::InputDenominator() {
    cout << "Введите знаменатель: ";
    cin >> denominator;
}

// Вывод дроби
void Fraction::Print() const {
    if (denominator == 1.0f) {
        cout << numerator;
    }
    else {
        cout << numerator << "/" << denominator;
    }
}

//Сложение 
void Fraction::Plus() const {
    cout << "Сложение: ";
    Print();
    cout << " + " << numerator << "/" << denominator << " = ";
    cout << (numerator + denominator) << "/" << denominator << endl;
}

//Вычитание
void Fraction::Minus() const {
    cout << "Вычитание: ";
    Print();
    cout << " - " << numerator << "/" << denominator << " = ";
    cout << (numerator - denominator) << "/" << denominator << endl;
}

//Умножение
void Fraction::Multiplication() const {
    cout << "Умножение: ";
    Print();
    cout << " * " << numerator << "/" << denominator << " = ";
    cout << (numerator * numerator) << "/" << (denominator * denominator) << endl;
}

//Деление
void Fraction::Division() const {
    cout << "Деление:   ";
    Print();
    cout << " / " << numerator << "/" << denominator << " = ";
}