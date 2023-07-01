#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers;
  numbers.push_back(1);
  numbers.push_back(2);
  numbers.pop_back();
  int value = numbers.at(1);
  std::cout << value << std::endl;
  return 0;
}
