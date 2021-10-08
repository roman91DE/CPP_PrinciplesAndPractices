#include <iostream>
#include <stdexcept> // include std_lib exception classes
#include <vector>

// writing my own error checking and handler
int aggregate_until_manual(const std::vector<int> &vec) {

  std::string instr;
  int lim;

  std::cout << "(man) limit = ";
  std::cin >> instr;
  std::cout << std::endl;

  lim = std::stoi(instr);

  // error detection:
  // throw out_of_range exception if condition is true
  if (lim > vec.size() - 1) {
    throw std::out_of_range("man - out of range err");
    return 1;
  }

  int sum{0};
  for (int i{0}; i != lim; ++i) {
    sum += vec[i];
  }
  std::cout << "man -> " << sum << '\n';
  return 0;
}

int aggregate_until(const std::vector<int> &vec) {

  std::string instr;
  int lim;

  std::cout << "(reg) limit = ";
  std::cin >> instr;
  std::cout << std::endl;

  lim = std::stoi(instr);

  int sum{0};

  for (int i{0}; i != lim; ++i) {

    // error detection:
    // throw out_of_range if vector.operator[] will fail to access
    if (i > vec.size() - 1) {
      throw std::out_of_range("reg - out of range err");
      return 1;
    }

    sum += vec[i];
  }
  std::cout << "reg -> " << sum << '\n';
  return 0;
}

int main() {
  std::vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::cout << "Base vector: \n";
  for (auto &it : vec) {
    std::cout << it << ' ';
  }
  std::cout << std::endl;

  // error handling:
  // catch exceptions and display message in std::cerr for debugging
  try {
    aggregate_until_manual(vec);
  } catch (std::out_of_range &er) {
    std::cerr << er.what() << "\n";
    // return 1;
  }

  // error handling:
  // catch exceptions and display message in std::cerr for debugging
  try {
    aggregate_until(vec);
  } catch (std::out_of_range &er) {
    std::cerr << er.what() << "\n";
    // return 2;
  }

  return 0;
}