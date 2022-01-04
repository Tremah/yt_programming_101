#include <iostream>
//variable is a name for a piece of memory
//basic syntax for a variable definition: DataType variableName = <value>;
//basic syntax for a const variable definition: const DataType variableName = <value>;
  // constants can not be changed after they have been initialized
//& operator to retrieve the memory address: &variableName





int main()
{
  //DataType variableName = <value>;
  const int intValue = 5;
  
  std::cout << "value is: " << intValue;

  std::cin.get();
}