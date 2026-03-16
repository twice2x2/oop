#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    Fraction fraction_1;

    cout << "Ввод данных дроби\n";
    fraction_1.InputNumerator();
    fraction_1.InputDenominator();

    cout << "\n";
    fraction_1.Print();
    cout << "\n\n";

    cout << "Математические операции:\n";
    fraction_1.Plus();
    fraction_1.Minus();
    fraction_1.Multiplication();
    fraction_1.Division();

    return 0;
}