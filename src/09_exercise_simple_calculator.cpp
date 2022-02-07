#include <iostream>
#include <string>

//Exercise:
// 
// - Write a command line calculator which provides the following operations
//   - Addition, subtraction, division, multiplication, exponentiation, square root, sum of first n natural numbers
// 
// - The calculator can only work on integer values
// - The calculator should provide a command line menu with which the user can choose the different operations
// - After a operation was successfully completed, the result should be printed and the user should be presented with the menu again
// - The last option in the menu should be to quit the program
// - Homework for the viewer:
//   - Implement processing of floating point values
//   - Implement a check so that if the user does not enter a valid number, he/she is asked to enter the number again


void printMenu()
{
  std::cout << "\nMenu\n";
  std::cout << "====\n\n";

  std::cout << "1: Add\n";
  std::cout << "2: Subtract\n";
  std::cout << "3: Divide\n";
  std::cout << "4: Multiply\n";
  std::cout << "5: Exponentiation\n";
  std::cout << "6: Square Root\n";
  std::cout << "7: Sum Of First N natural numbers\n";
  std::cout << "8: Quit\n";

  std::cout << "Choice: ";
}


int getUserInputAsInteger()
{
  std::string userInput;
  getline(std::cin, userInput);
  int userInputInteger = std::stoi(userInput);
  return userInputInteger;
}

void add()
{
  std::cout << "\nInput the first value: ";
  int a = getUserInputAsInteger();

  std::cout << "Input the second value: ";
  int b = getUserInputAsInteger();
  int sum = a + b;
  std::cout << a << " + " << b << " = " << sum << "\n";
}

void subtract()
{
  std::cout << "\nInput the first value: ";
  int a = getUserInputAsInteger();

  std::cout << "Input the second value: ";
  int b = getUserInputAsInteger();
  int sum = a - b;
  std::cout << a << " - " << b << " = " << sum << "\n";
}

void divide()
{
  std::cout << "\nInput the first value: ";
  int a = getUserInputAsInteger();

  std::cout << "Input the second value: ";
  int b = getUserInputAsInteger();
  float sum = static_cast<float>(a) / static_cast<float>(b);
  std::cout << a << " / " << b << " = " << sum << "\n";
}

void multiply()
{
  std::cout << "\nInput the first value: ";
  int a = getUserInputAsInteger();

  std::cout << "Input the second value: ";
  int b = getUserInputAsInteger();
  int sum = a * b;
  std::cout << a << " * " << b << " = " << sum << "\n";
}

void exponent()
{
  std::cout << "\nInput the base: ";
  int base = getUserInputAsInteger();

  std::cout << "Input the exponent: ";
  int exponent = getUserInputAsInteger();

  int result = 1;
  for (int i = 1; i <= exponent; ++i)
  {
    result *= base;
  }

  std::cout << base << " to the power of " << exponent << " = " << result << "\n";
}

void squareRoot()
{
  std::cout << "\nInput value: ";
  int value = getUserInputAsInteger();

  double squareRoot = std::sqrt(value);

  std::cout << "The square root of " << value << " = " << squareRoot << "\n";
}

void sumOfFirstNatNumbers()
{
  std::cout << "\nInput the last natural number to add: ";
  int lastNumber = getUserInputAsInteger();

  int sum = 0;
  for (int i = 1; i <= lastNumber; ++i)
  {
    sum += i;
  }

  std::cout << "The sum of the first " << lastNumber << " = " << sum << "\n";
}

int main()
{
  bool run = true;
  while (run)
  {
    printMenu();
    int userInput = getUserInputAsInteger();
    switch (userInput)
    {
      case 1:
        //Addition        
        add();
        break;
      case 2:
        subtract();
        break;
      case 3:
        divide();
        break;
      case 4:
        multiply();
        break;
      case 5:
        exponent();
        break;
      case 6:
        squareRoot();
        break;
      case 7:
        sumOfFirstNatNumbers();
        break;
      case 8:
        run = false;
        std::cout << "\nExiting the calculator!\nThanks for using this software!";
        break;
      default:
        std::cout << "\nInvalid choice! Please Try again!";
        break;
    }
    std::cout << "\nPress any key to continue...";
    std::cin.get();
  }
  return 0;
}