#pragma once
#include <iostream>

class Fraction {
private:
    float numerator;   // числитель
    float denominator; // знаменатель

public:
    //Конструктор по умолчанию
    Fraction() : numerator(0.0f), denominator(1.0f) {}

    //Конструктор с параметрами
    Fraction(float num, float den)
        : numerator(num), denominator(den != 0 ? den : 1.0f) {}

    //Геттеры 
    inline float getNumerator()   const { return numerator; }
    inline float getDenominator() const { return denominator; }

    //Сеттеры 
    inline void setNumerator(float num) { numerator = num; }
    inline void setDenominator(float den)
    {
        denominator = (den != 0) ? den : 1.0f;
    }

    //Методы ввода 
    void InputNumerator();
    void InputDenominator();

    //Методы операций 
    void Plus()     const;
    void Minus()    const;
    void Multiplication() const;
    void Division() const;

    //Вывод дроби 
    void Print() const;
};