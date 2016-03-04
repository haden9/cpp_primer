#include <iostream>

int main() {
  int fromRange = 0, toRange = 0;

  /*
   * This program displays the range between two
   * numbers that are provided
   */
  std::cout << "Enter a number: " << std::endl;
  std::cin >> fromRange;
  std::cout << "Enter a second number: " << std::endl;
  std::cin >> toRange;

  while (fromRange <= toRange) {
    std::cout << fromRange ++ << std::endl;
  }

  return 0;
}
