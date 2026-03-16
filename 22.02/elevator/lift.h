#pragma once
#include <iostream>

class Lift {
private:
    int minFloor;       //Нижний этаж
    int maxFloor;       //Верхний этаж
    int currentFloor;   //Текущий этаж
    bool isWorking;     //Состояние лифта

public:
    //Конструктор по умолчанию
    Lift() : minFloor(1), maxFloor(10), currentFloor(1), isWorking(false) {}

    //Конструктор с диапазоном
    Lift(int minF, int maxF)
        : minFloor(minF), maxFloor(maxF), currentFloor(minF), isWorking(false)
    {
        //Условие: если min > max, то меняем местами
        if (minFloor > maxFloor) {
            int temp = minFloor;
            minFloor = maxFloor;
            maxFloor = temp;
        }
    }

    //Геттеры 
    inline int  getMinFloor()     const { return minFloor; }
    inline int  getMaxFloor()     const { return maxFloor; }
    inline int  getCurrentFloor() const { return currentFloor; }
    inline bool isOn()            const { return isWorking; }

    //Методы
    
    //Установка диапазона этажей
    void setRange(int minF, int maxF);

    //Включить лифт
    void turnOn();

    //Выключить лифт
    void turnOff();

    //Вызов лифта на указанный этаж
    bool call(int floor);
};