#include <cmath>
#include <iostream>
#include <iomanip>
#include <stdexcept>

struct QuadraticEquation {
private:
  double a, b, c;

public:
  QuadraticEquation(double _a, double _b, double _c) : a(_a), b(_b), c(_c) {
    if ((a == 0.0) || (((b * b) - (4 * a * c)) < 0.0))
      throw std::runtime_error("Bad input for arguments!\n");
  };
  void print() const {
    std::cout << '(' << a << "x^2) + (" << b << "x) + (" << c << ") = 0\n";
  };
  void solve() const {
    double root1, root2;
    root1 = ((-b) + sqrt((b * b) + (4 * a * c))) / (2 * a);
    root2 = ((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
    std::cout << "root at x1/x2 = " << std::setprecision(6) << root1 << '/' << std::setprecision(6) << root2 << '\n';
  }
};

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cerr << "Error: "
              << "number of arguments is invalid!" << '\n';
    return -1;
  }
  double a, b, c;
  try {
    a = std::stod(argv[1]);
    b = std::stod(argv[2]);
    c = std::stod(argv[3]);
  } catch (const std::exception &error) {
    std::cerr << "Error: " << error.what() << '\n';
    return -2;
  }
  try {
    QuadraticEquation q{a, b, c};
    q.print();
    q.solve();
    return 0;
  } catch (const std::runtime_error &error) {
    std::cerr << "Error: " << error.what() << '\n';
    return -3;
  }
}