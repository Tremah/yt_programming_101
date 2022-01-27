#include <iostream>

//if statement
// evaluates a logical expression
// divides the code into branches which are executed by the program depending on a given logical expression
// can have else if and else branches
// 
//switch-case statement
// evaluates the value of a variable
// case: statements cover each value the programmer wants to evaluate
// default case: is not mandatory but should be implement all the time

int main()
{
  //if statement
  int a = 4;

  if (a != 4)
  {
    std::cout << "a != 4\n";
  }

  if (a != 4)
  {
    std::cout << "a != 4\n";
  }
  else if (a == 4)
  {
    std::cout << "a == 4\n";
  }
  else
  {
    std::cout << "else branch\n";
  }

  //switch-case statement
  switch (a)
  {
    case 1:
      std::cout << "A == 1!\n";
      break;
    case 2:
      std::cout << "A == 2!\n";
      break;
    case 4:
      std::cout << "A == 4!\n";
      break;
    default:
      std::cout << "Default!\n";
      break;
  }
  

  return 0;
}