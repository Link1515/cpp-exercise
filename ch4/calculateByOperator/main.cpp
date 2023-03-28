#include "print.h"
#include "calculate.h"
#include <iostream>

int main() {
    double num1{inputDouble()};
    double num2{inputDouble()};
    char oper{inputOperator()};

    // check operator is vaild
    if (
        oper != '+' &&
        oper != '-' &&
        oper != '*' &&
        oper != '/'
    ) return 1;

    std::cout << num1 << ' ' << oper << ' ' << num2 << " is " << calculateByOperator(num1, num2, oper) << '\n';

    return 0;
}

