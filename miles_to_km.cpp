#include <iostream>

int main() {
  double miles;
  double kilometers;
  std::cout << "Enter the number of miles to convert: ";
  std::cin >> miles;
  kilometers = miles * 1.609344;
  std::cout << miles << " miles is the same as " << kilometers << " kilometers.\n";
}
