#include <iostream>

int main() {
    long standard_version = __cplusplus;
    std::cout << "C++ Standard version: " << standard_version << std::endl;

    if (standard_version == 199711L) {
        std::cout << "C++98/03" << std::endl;
    } else if (standard_version == 201103L) {
        std::cout << "C++11" << std::endl;
    } else if (standard_version == 201402L) {
        std::cout << "C++14" << std::endl;
    } else if (standard_version == 201703L) {
        std::cout << "C++17" << std::endl;
    } else if (standard_version == 202002L) {
        std::cout << "C++20" << std::endl;
    } else if (standard_version >= 202302L) { // Future standards will have higher values
        std::cout << "C++23 or later" << std::endl;
    } else {
        std::cout << "Unknown or non-standard C++ version" << std::endl;
    }
    return 0;
}