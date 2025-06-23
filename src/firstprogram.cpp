#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num; // get integer user entered
    std::cout << "You entered: " << num;
    return 0;
}