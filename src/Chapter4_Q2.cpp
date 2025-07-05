#include <iostream>
#include <cmath>
#define GRAVITY_CONSTANT 9.8

double getDouble();

int main()
{
  /** 
   * ball drop program
   */
  // const double GRAVITY_CONSTANT {9.8};   // metres/second

  int secs {0};
  double height{0};
  double fallen{0};

  std::cout << "Enter the height of the tower in meters: ";
  height = getDouble();

  while (height > 0)
  {
    fallen = GRAVITY_CONSTANT * std::pow(secs, 2.0) / 2;

    if (height - fallen <= 0)
      // ball is on the ground
      {
        std::cout << "At " << secs << " seconds, the ball is on the ground." << std::endl;
        break;
      }
    std::cout << "At " << secs << " seconds, the ball is at height: " << height - fallen << " meters.\n";
    secs += 1;
  }



}

double getDouble()
{
  double height;
  std::cin >> height;
  return height;
}