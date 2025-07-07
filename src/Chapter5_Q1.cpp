#include <iostream>

int getName();
int getAge();

int main()
{
  int nameLength {};
  int age {};
  nameLength = getName();
  age = getAge();

  std::cout << "Your age + length of name is : " << nameLength + age << std::endl;

}

int getName()
{ 
  std::cout << "Enter your full name: " << std::flush ;
  std::string fullName{};
  std::getline(std::cin >> std::ws, fullName);
  std::cout << fullName << std::endl;
  return static_cast<int>(fullName.length());
}

int getAge()
{
  std::cout << "Enter your age: " << std::flush ;
  int age {};
  std::cin >> age;
  std::cout << age << std::endl;
  return age;
}