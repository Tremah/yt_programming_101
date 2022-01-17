#include <iostream>

//four different types of operators a programmer will use on a daily basis
//arithmetic
//  +, -, *, /, %, ++, --
//logical
//  &&, ||, !
//relational / comparison
//  ==, !=, <, >, >=, <=
//assignment
//  =, +=, -=, *=, /=

int main()
{
  int a = 1;
  float b = 5;
  float c = 3;
  std::cout << "value is: " << c << "\n";
  c /= b;
  std::cout << "value is: " << c << "\n";

  return 0;
}