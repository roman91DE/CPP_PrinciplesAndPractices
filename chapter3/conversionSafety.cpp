#include "std_lib_facilities.h"

int main() {
  int n = 16;
  // instead of
  // char c = n
  // use initializer list
  char c{n};
  // compiler warns for unsafe narrowing conversion
  cout << "n = " << n << endl << "c = " << c << endl;

  double d = 12312032310.1234;
  int n2{d};
  cout << "n2 = " << setprecision(5) << n2 << endl
       << "d = " << setprecision(5) << d << endl;

  return 0;
}
