#include <iostream>
#include <vector>

int main() {

    // arrays in cpp

    // standard arrays

    int arr_m_5[] = {5, 10, 15, 20, 25};
    std::cout << arr_m_5 << std::endl;

    for (int m_5 : arr_m_5) {
        std::cout << m_5 << std::endl;
    }

    // vectors

    std::vector<int> arr_m_10 = {10, 20, 30, 40, 50};
    arr_m_10.push_back(60);

    for (int m_10 : arr_m_10) {
        std::cout << m_10 << std::endl;
    }

    return 0;
}