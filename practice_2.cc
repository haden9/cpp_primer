#include <iostream>

/*
 * This program receives two
 * integer params and sums them
 * to display the result
 */
int main()
{
  int v1 = 0, v2 = 0, result = 0; //declare and initialize values
  std::cout << "Enter the first number:" << std::endl;
  std::cin >> v1; //obtain the first value
  std::cout << "Enter the second number:" << std::endl;
  std::cin >> v2; //obtain the second value
  result = v1 + v2;
  std::cout << "The sum of " << v1
            << " and " << v2
            << " is " << result << std::endl; //display the sum result
  return 0;
}

