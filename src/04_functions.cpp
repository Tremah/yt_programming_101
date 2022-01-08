//We have been working with a function the entire time, the main() function
//A Function is basically a piece of code which can be called by its given name
// 
//Functions consist of a return type, a name, a parameter list and and a body:
//   returnType name(parameter list)
//   {
//      body
//   }  
//Combination of return type, name and parameter list is called the signature 
//Functions must be uniquely identifiable by their signature
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
//Example function calls
//  function(int number, std::string text)
//  int value = giveMeAnInt()

#include <iostream>

void printStaticText()
{
  std::cout << "print from printStaticText()\n";
}

void printDynamicText(std::string message)
{
  std::cout << message << "\n";
}

void printMultipleParameters(int number1, int number2)
{
  std::cout << "You gave the following numbers: " << number1 << " " << number2 << "\n";
}

int giveMeAnInt()
{
  return 666;
}

int main()
{
  std::cout << "text\n";
  printStaticText();
  printDynamicText("Our custom message!");
  printMultipleParameters(5, 6);

  int value = giveMeAnInt();
  std::cout << "value from giveMeAnInt(): " << value << "\n";

  return 0;
}