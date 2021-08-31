#include "std_lib_facilities.h"

// * operator implemented
int modern_square(int x) { return x * x; }

// before * was implemented
int ancient_square(int x) {
  int result = 0;
  for (int i = 0; i < x; i++) {
    result += x;
  }
  return result;
}

int main() {
  for (int i = 1; i < 100; i++) {
    cout << "i = " << i << "; sqrt(i) = " << modern_square(i) << "/"
         << ancient_square(i) << '\n';
  }
  return 0;
}
