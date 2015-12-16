
#include <iostream>
/*
 * uni = Unknown Number of Inputs
 * use ctrl-d to enter an end-of-file input
 * or add a non-integer input at the end of
 * the sequence ex. 1 2 3 4 d
 */
int main() {
  int sum = 0, value = 0;

  // an istream becomes invalid when we enter an end-of-file or invalid input
  while(std::cin >> value) {
    sum += value;
  }
  std::cout << "Sum is: " << sum << std::endl;
  return 0;
}
