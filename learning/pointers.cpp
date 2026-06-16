#include <iostream>

int main() {
    
    // pointers in cpp

    int code; // initialize
    code = 10; // assign
    int *code_addr = &code; // pointer to the variable

    std::cout << "Code: " << code << std::endl << "Code Address: " << code_addr << std::endl;

    return 0;
}