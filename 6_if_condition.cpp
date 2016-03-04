#include <iostream>
/*
 * use ctrl-d to enter an end-of-file input
 * or add a non-integer input at the end of
 * the sequence ex. 1 2 3 4 d
 */
int main() {
  int val = 0, currentVal = 0, sum = 0;

  if (std::cin >> currentVal) {
    while (std::cin >> val) {
      if (val == currentVal) {
        sum += val;
      } else {
        sum += currentVal;
        std::cout << "The sum total of "
          << currentVal << " is: "
          << sum << std::endl;
        currentVal = val;
        sum = 0;
      }
    }
    sum += currentVal;
    std::cout << "The sum total of "
      << currentVal << " is: "
      << sum << std::endl;
  }

  return 0;
}
