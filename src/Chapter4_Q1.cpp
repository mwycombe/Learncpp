#include <iostream>

char getOperator();

double getDouble();

int main()
{
  /**
   * Answer to Learncpp chapter 4 question 1
   */
  double firstNumber{};
  double secondNumber{};

  firstNumber = getDouble();

  secondNumber = getDouble();

  char opchar{};
  opchar = getOperator();

  std::cout << firstNumber << " " << opchar << " " << secondNumber << " is: ";

  switch (opchar)
  {
    case '+':
      std::cout << firstNumber + secondNumber;
      break;
    case '-':
      std::cout << firstNumber - secondNumber;
      break;
    case '*':
      std::cout << firstNumber * secondNumber;
      break;
    case '/':
      std::cout << firstNumber / secondNumber;
      break;
  }
  std::cout << std::endl;
}

char getOperator ()
{
  while (true)
  {

    char opchar{};
    std::cout << "Please enter an operator: ";
    std::cin >> opchar;

    // check for a valid operator
    switch (opchar)
    {
      case '+':
      case '-':
      case '*':
      case '/':
        std::cout << "You entered: " << opchar << std::endl;
        return opchar;  // return to caller if valid
      default: // otherwise signal an error
        std::cout << "You entered: " << opchar ; 
        std::cout << " which is not a valid operator\n";
        std::cout << "Please try again." << std::endl;
    }
 
  }

  
}
double getDouble()
  {
    double inputDouble{};
    std::cout << "Enter a double number: ";
    std::cin >> inputDouble;
    return inputDouble;
  }