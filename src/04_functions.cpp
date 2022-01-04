//We have been working with a function the entire time, the main() function
//A Function is basically a piece of code which can be called by its given name
// 
//Functions consist of a name, a signature, a return type and a body:
//   returnType name(signature)
//   {
//      body
//   } 
// 
//Functions must be uniquely identifiable by the combination of their name and signature
// 
//Functions can have any name
//  Usually their name cannot start with a number, can include underscores but must not include any other special character (., \, /, etc.)
//  Different for every programming language
// 
//Function can either have an empty signature (no parameters) or a list of function parameters as their signature
//  function()
//  function(int number, std::string text)
// 
//Functions can either have no return type (void) or can return any type
//  The value they return can be saved in a variable or be discarded
// 
//A functions body is the part where the programmer places the logic
//
//Functions are called by their name and signature
//  function(int number, std::string text)
//  int value = giveMeAnInt()

#include <iostream>

void print()
{
  std::cout << "print from function with empty signature\n";
}

void print(std::string message)
{
  std::cout << message << "\n";
}

void print(std::string message, int number)
{
  std::cout << message << number << "\n";
}

void function2()
{
  std::cout << "print from function 2\n";
}

int returnMeAnInt()
{
  return 5;
}

int returnMeAnInt(int value)
{
  return value;
}

int main()
{
  std::cout << "print from main\n";
  print();
  print("print from function with string parameter");
  print("print from function with string and int parameter ", 5);
  function2();

  int a = returnMeAnInt();
  std::cout << "value from returnMeAnint(): " << a << "\n";
  int b = returnMeAnInt(6);
  print("value from returnMeAnInt(6): ", b);

  return 0;
}