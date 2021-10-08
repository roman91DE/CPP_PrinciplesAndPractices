#include <iostream>
#include <stdexcept>
#include <vector>

int get_n() {
  int n;
  std::cout << "Enter the number of integers to be aggregated: ";
  try {
    std::cin >> n;
    if (n < 0) {
      throw std::runtime_error("Error: A negativ n-value was read from stdin!");
    }
    return n;
  } catch (const std::exception &e) {
    std::cerr << "Exception thrown by read_n(): " << e.what() << '\n';
    throw std::runtime_error("Failed to read n from stdin!");
  }
}

void append_to_vector(std::vector<int> *vec_ptr) {
  std::string buffer;
  std::cout << "Enter space seperated integer values, terminate with 'x': \n";
  while (1) {
    try {
      std::cin >> buffer;
      if (buffer == "x") return;
      vec_ptr->emplace_back(std::stoi(buffer));
    } catch (const std::exception &e) {
      std::cerr << "Exception thrown by fill_vector(): " << e.what() << '\n';
      throw std::runtime_error("Failed to read ints from stdin!");
    }
  }
}

int sum_n_first(int n, const std::vector<int> *vec_ptr) {
  if (n > vec_ptr->size()) {
    throw std::runtime_error(
        "Exception: Vector has less elements than n value!");
  }
  int sum{0};
  for (unsigned int idx{0}; idx < n; ++idx) {
    sum += (*vec_ptr)[idx];
  }
  return sum;
}

int main() {
  int n;
  try {
    n = get_n();
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return -1;
  }
  std::vector<int> vec;
  try {
    append_to_vector(&vec);
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return -2;
  }
  int result;
  try {
    result = sum_n_first(n, &vec);
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return -3;
  }
  std::cout << "Result: " << result << '\n';
  return 0;
}