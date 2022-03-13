#include <iostream>
#include <vector>

// - Exercise: Sort a set of integers in ascending order via bubble sort
// - Homework: Sort the integer set in descending order


int main()
{
  std::vector<int> integerSet = {454, 3231, -3456, 0, 1, 89, 45, 111};

  std::cout << "unsorted integer set: ";
  for (int i = 0; i < integerSet.size(); ++i)
  {
    std::cout << integerSet.at(i) << " ";
  }
  std::cout << "\n";

  //sort
  for(int i = 0; i < integerSet.size(); ++i)
  { 
    int currentSmallest = integerSet.at(i);
    int swap = 0;

    for (int j = i; j < integerSet.size(); ++j)
    {
      //compare current Position to next positions and swap if needed
      if (currentSmallest > integerSet.at(j))
      {
        std::cout << "current smallest value: " << currentSmallest << "\n";
        std::cout << "swap value: " << integerSet.at(j) << "\n";

        swap = currentSmallest;
        currentSmallest = integerSet.at(j);
        integerSet.at(j) = swap;


        std::cout << "current smallest value: " << currentSmallest << "\n";
        std::cout << "swap value: " << integerSet.at(j) << "\n\n";

      }
    }
    integerSet.at(i) = currentSmallest;
  }

  std::cout << "sorted integer set: ";
  for (int i = 0; i < integerSet.size(); ++i)
  {
    std::cout << integerSet.at(i) << " ";
  }
  std::cout << "\n";

  return 0;
}