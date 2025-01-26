#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {1, 2, 3, 4, 5};

  // Correct approach using iterators:
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  vec.push_back(6);

  for (int val : vec) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  return 0;
}
