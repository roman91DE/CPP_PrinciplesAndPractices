#include "std_lib_facilities.h"

// switch statements - concurrency

int main() {
  constexpr char euro = 'e';
  constexpr char dollar = 'd';
  constexpr char yuan = 'y';
  int cad_amount = 0;
  char currency = '!';
  cout << "Enter the amount of canadian dollars space separated by a char for\n\
  the currency you wish to convert to\n(e for euro, d for us-dollar, y for yuan)";
  cin >> cad_amount >> currency;
  switch (currency) {
  case (euro):
    cout << cad_amount * 1.5 << " in Euro\n";
    break;

  case (dollar):
    cout << cad_amount * 2.0 << " in US-Dollar\n";
    break;

  case (yuan):
    cout << cad_amount * 42 << " in Yuan\n";
    break;

  default:
    cout << "No support for currency = " << currency << '\n';
  }
  return 0;
}
