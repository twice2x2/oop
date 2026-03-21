#include <iostream>
#include "fraction.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    //Объект 1
    Fraction f1;                 

    //Объект 2
    Fraction f2(5, 2);        
  

    //Объект 3 — результат сложения
    Fraction f3 = f1.Plus(f2);
   

    //Объект 4 — результат умножения
    Fraction f4 = f2.Multiplication(f3); 
   
    //Арифмитические операции
    Fraction sub = f2.Minus(f1);    
    cout << "f2 - f1 = "; sub.Print(); cout << endl;

    Fraction div = f4.Division(f2);
    cout << "f4 / f2 = "; div.Print(); cout << endl << endl;

    cout << "Всего объектов: " << Fraction::getObjectCount();

    return 0;
}