#include <iostream>

double getDouble();
char getOperator();
void printResult(double x, char op, double y);



int main() {
    double x{getDouble()};
    double y{getDouble()};
    char op{getOperator()};


    printResult(x, op, y);    
}

double getDouble() {
    double value{};
    std::cin >> value;
    return value;
}

char getOperator() {
    char op{};
    std::cin >> op;
    return op;
}

void printResult(double x, char op, double y) {
    switch (op) {
        case '+':
            std::cout << x + y << std::endl;
            break;
        case '-':
            std::cout << x - y << std::endl;
            break;
        case '*':
            std::cout << x * y << std::endl;
            break;
        case '/':
            std::cout << x / y << std::endl;
            break;
        default:
            return;
    }
}