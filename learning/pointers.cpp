#include <iostream>

int main() {
    
    // pointers in cpp

    int code; // initialize
    code = 10; // assign
    int *code_ptr = &code; // pointer to the variable, referencing

    std::cout << "Code: " << code << std::endl << "Code Address: " << code_ptr << std::endl;

    std::cout << "Code obtained from address: " << *code_ptr << std::endl; // deferencing

    *code_ptr = 25; // value modification using memory pointer
    std::cout << "Modified Code: " << code << std::endl;

    // new and delete
    std::cout << "New and Delete" << std::endl;

    int *fax_ptr = new int;
    std::cout << fax_ptr << std::endl << *fax_ptr << std::endl;
    std::cout << std::endl;

    *fax_ptr = 20;

    std::cout << fax_ptr << std::endl << *fax_ptr << std::endl;
    std::cout << std::endl;

    delete fax_ptr;

    std::cout << fax_ptr << std::endl << *fax_ptr << std::endl;
    std::cout << std::endl;

    fax_ptr = nullptr;
    
    /*
    std::cout << fax_ptr << std::endl << *fax_ptr << std::endl;   -- ! Danger Zone | Do not execute !
    */
    std::cout << std::endl;

    return 0;
}