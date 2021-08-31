#include <iostream>

int main() {
  char c = 'a';
  while (c <= 'z') {
    std::cout << c << '-' << int(c) << std::endl;
    ++c;
  }
  return 0;
}
