#include <iostream>

// The while loop is another type of loop which is based on condition with true or false as its result
//  i.e. 5 > 7, state == false, x != 5
// It iterates as long as this condition is not reached so the programmer must make sure, 
// that the condition for termination of the loop can be reached by the program
// 
// Unlike the for-loop, it is not based on a counter or index
// Keeping track of the number of iterations the loop went through before it terminated must be done by the programmer


int main()
{
  int x = 1, y = 0;

  while (x != y)
  {
    x++;
    std::cout << "Number of iterations:" << x << "\n";
  } 

  return 0;
}