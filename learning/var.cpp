#include <iostream>

int main() {

    // Variables

    int x = 20, y = 30, z = 50;
    std::cout << "Sum: " << x+y+z << std::endl;

    int a, b, c;
    a = b = 40; c = 20;
    std::cout << "Sum:" << a+b+c << std::endl;

    const int e = 100;
    std::cout << "Standard Output: " << e << std::endl;

    bool f = true, g = false;
    std::cout << "Boolean Logic: " << std::endl << std::boolalpha << f << std::endl << std::noboolalpha << g << std::endl;

    char h = 'V';
    std::cout << "Char Output: " << h << std::endl;

    std::string i = "Vector";
    std::cout << "String Output: " << i << std::endl;

    std::string fname = "Whiskey";
    std::string lname = "Wine";
    std::cout << fname + " + " + lname << std::endl;

    std::cout << fname.append(lname) << std::endl;

    std::cout << fname.length() << std::endl << lname.size() << std::endl;
    
    std::cout << fname[2] + lname.at(3) << std::endl;

    return 0;
}