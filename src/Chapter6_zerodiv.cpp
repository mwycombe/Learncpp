#include <iostream>

int main ()
{
  constexpr int apples {12};
  std::cout << "You have " << apples << " apples. Enter how many servings of apple you want: " <<std::flush;

  double d{};
  std::cin >> d;

  std::cout << "Each serving is " << apples / d << " appples." << std::endl;

  return  0;
}