#include <iostream>
#include <string>

//Exercise:
// 
// - Scope is the part of the program where an entity is visible and callable by its name
// - In this lesson we will focus on global, block and function scope
// - Global scope
//  - The variable is visible within the entire program
// - Block scope
//  -  The entity is visible within a block of the program
// - Function scope
//  - The entity is visible within a function

int var1 = 2;

void function1()
{
  int var3 = var1;
  int var5 = var3;
}

int main()
{  
  int var2 = var3;

  std::cout << "value of var2 = " << var2 << "\n";
  
  return 0;
}