#include <iostream>

// Loops enable the programmer to repeat the execution of code multiple times
// Used to avoid copy paste (redundancy) of code
// 
// For-loop is one type of loops, based on a counter (index) which is incremented or decremented on every iteration
// The control block of the loop defines to which value the counter is to be incremented/decremented until the loop stops
// 
// Basic syntax:
// for (counter = start value; condition for counter; increment/decrement counter)
// {
//    Code to be executed (body)
// }
// 
// Example with real values:
// 
// for(int i = 0; i < 10; ++i)
// {
//    std::cout << "i = " << i << "\n";
// } 
//
// Example today:
//   Addition of all numbers between 1 and 10 (inclusive)
//   Print the new value on each iteration

int main()
{
  int sum = 0;

  for (int i = 1; i <= 10; ++i)
  {
    sum += i;
    std::cout << "sum = " << sum << "\n";
  }
  
  return 0;
}