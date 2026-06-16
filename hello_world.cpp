#include <iostream> // The standard Input/Output Stream library

int main() {
    // cout uses the stream insertion operator (<<) to push text to the console
    std::cout << "Hello from C++! This works flawlessly everywhere." << std::endl;
    
    // You can chain multiple things together easily
    int version = 16;
    std::cout << "My compiler version is: " << version << std::endl;
    
    return 0;
}