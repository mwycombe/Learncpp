#include "globalinline.h"
#include <iostream>


int main()
{
  std::cout << "Enter a radius: ";
  double radius{};
  std::cin >> radius;

  std::cout << "The circumferences is: " << 2 * radius * globalinline::pi << std::endl;

  return 0;

}