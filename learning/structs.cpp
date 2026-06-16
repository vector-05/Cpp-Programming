#include <iostream>

struct vectors {
    int v1;
    char v2;
    bool v3;
    int v4;
    int v5;
};

int main() {

    // structures in cpp

    vectors alpha;
    alpha.v1 = 10;
    alpha.v2 = 'A';
    alpha.v3 = true;
    alpha.v4 = 55;
    alpha.v5 = 110;

    vectors beta;
    beta.v1 = 25;
    beta.v2 = 'W';
    beta.v3 = true;
    beta.v4 = 35;
    beta.v5 = 105;

    std::cout << "alpha vector \n vector.code: " << alpha.v1 << std::endl;
    std::cout << "beta vector \n vector.state: " << beta.v4 << std::endl;

    return 0;
}