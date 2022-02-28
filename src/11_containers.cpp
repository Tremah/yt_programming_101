#include <iostream>
#include <array>
#include <unordered_map>

// - Containers are data structures which can hold elements of a certain type
// - Containers differ in 
//  - how data is stored
//  - how the programmer can access the stored data
//  - how the data is traversed
//
// - There are two main types of container structures
//  - Array: index based access, number of elements stored must be known before the array is created
//  - Map: elements are accessed via a key, can be expanded dynamically


int main()
{
  //Unordered Map
  std::unordered_map<std::string, std::string> uoMap;

  uoMap.insert({"name", "Tremah"});
  uoMap.insert({"lastName", "Tremov"});
  uoMap.insert({"Street", "Main Street 999"});
  uoMap.insert({"City", "ImagineTown"});
  uoMap.insert({"City1", "ImagineTown"});
  uoMap.insert({"City2", "ImagineTown"});
  uoMap.insert({"City3", "ImagineTown"});
  uoMap.insert({"City4", "ImagineTown"});

  uoMap.erase("Street");

  //Array
  for (auto& pair : uoMap)
  {
    std::cout << "Key: " << pair.first << "\n";
    std::cout << "Value: " << pair.second << "\n";
  }

  int a = 1;
  std::cout << "value of a is " << a << "\n";

  int intArray[5] = {1, 2, 3, 4, 5};

  intArray[0] = 99;

  for (int i = 0; i < 5; ++i)
  {
    std::cout << "Value at array position " << i << " is " << intArray[i] << "\n";
  }

  return 0;
}