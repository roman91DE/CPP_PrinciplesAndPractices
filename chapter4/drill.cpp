#include "std_lib_facilities.h"

int main() {
  string str_prompt{
      "Enter a floating point number and the unit of measurement:"};
  double temp;
  double minimum;
  double maximum;
  string unit{""};
  double in_meter;
  cout << str_prompt << '\n';
  int ind = 0;
  vector<double> inputs;
  while (cin >> temp >> unit) {
    if (unit == "cm") {
      in_meter = temp / 100.0;
    } else if (unit == "m") {
      in_meter = temp;
    } else if (unit == "in") {
      in_meter = (temp * 2.54) / 100.0;
    } else if (unit == "ft") {
      in_meter = 12.0 * (temp * 2.54) / 100.0;
    } else {
      cout << "Sorry i dont know " << unit << ", please try again!\n";
      continue;
    }
    if (ind == 0) {
      minimum = in_meter;
      maximum = in_meter;
    }
    cout << "You entered the number = " << temp << unit << "\n"
         << "Converted to meter we get: " << in_meter << "\n";

    if (in_meter < minimum) {
      minimum = in_meter;
      cout << "it's the smallest value entered so far!\n";
    } else if (in_meter > maximum) {
      maximum = in_meter;
      cout << "it's the largest value entered so far!\n";
    }
    ++ind;
    inputs.push_back(in_meter);
  }
  cout << "You entered " << ind << " values\nSorted Input in meter:";
  sort(inputs);
  for (double val : inputs)
    cout << val << ' ';
  cout << '\n';
  return 0;
}