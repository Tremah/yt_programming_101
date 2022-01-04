#include <iostream>

int main()
{
  int iValue = sizeof(long long);
  std::cout << "int value: " << iValue << "\n";

  float fValue = 5.43434444;
  double dValue = 5.436575757;
  std::cout << "float value: " << fValue << "\n";
  std::cout << "double value: " << dValue << "\n";

  char letter = 'G';
  std::cout << "single char value: " << letter << "\n";

  char name[] = "Gandalf The Grey And Later The White";
  std::cout << "name: " << name << "\n";

  bool compare = 1;
  if (compare == true)
  {
    std::cout << "compare = true" << "\n";
  }
  if (compare == false)
  {
    std::cout << "compare = false" << "\n";
  }





  std::cin.get();
}