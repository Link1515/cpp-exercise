#include "print.h"
#include <iostream>

double inputDouble() {
    std::cout << "Enter a double value: ";
    double input{};
    std::cin >> input;

    return input;
}

char inputOperator() {
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char input{};
    std::cin >> input;

    return input;
}
