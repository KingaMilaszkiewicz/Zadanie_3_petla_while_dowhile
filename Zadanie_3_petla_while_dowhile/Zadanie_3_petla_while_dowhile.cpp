// Zadanie_3_petla_while_dowhile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int x = 0;
    int sum = 0;
    int i = 0;
    int negative = 0;

    do {
        std::cout << "Podaj liczbe: "; // Input number
        std::cin >> x;
        sum += x;
        i++;
        if (x < 0) {
            negative++;
        }
    } while (sum < 50 && negative <= 5);

    std::cout << "Wprowadzono " << i << " liczb.\n"; // Amount of number input
    std::cout << "Suma wprowadzonych liczb: " << sum <<"\n"; // Sum of input numbers

    return 0;
}