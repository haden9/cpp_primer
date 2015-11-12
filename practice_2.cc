#include <iostream>

/*
 * This program receives two integer params and sums
 * them to display their result
 */
int main()
{
  // declare and initialize values
  int v1 = 0, v2 = 0, result = 0; 
  std::cout << "Enter the first number:" << std::endl;
  std::cin >> v1; // obtain the first value
  std::cout << "Enter the second number:" << std::endl;
  std::cin >> v2; // obtain the second value
  result = v1 + v2;
  // display the sum result
  std::cout << "The sum of " << v1
            << " and " << v2
            << " is " << result
            << std::endl;
  return 0;
}

