#include <iostream>

int main() {

    // Standard Calc App

    std::cout << "Welcome to the calculator!" << std::endl;

    // defining parameters
    
    int x, y, op;
    double result;

    // user input

    std::cout << "Operations:" << std::endl;    
    std::cout << "1 : +" << std::endl;
    std::cout << "2 : -" << std::endl;
    std::cout << "3 : *" << std::endl;
    std::cout << "4 : /" << std::endl;
    std::cout << "Enter Operation code: "; std::cin >> op;

    std::cout << "Enter Number 1: "; std::cin >> x; std::cout << std::endl;
    std::cout << "Enter Number 2: "; std::cin >> y; std::cout << std::endl;

    switch(op) {
        case 1 : result = x + y; break;
        case 2 : result = x - y; break;
        case 3 : result = x * y; break;
        case 4 : result = x / y; break;
        default: result = false;
    }

    std::cout << "Result: " << result;

    return 0;
}