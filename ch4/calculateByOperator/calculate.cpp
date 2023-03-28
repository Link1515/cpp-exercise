#include "calculate.h"

double calculateByOperator(double x, double y, char oper) {
    switch(oper) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0;
    }
}
