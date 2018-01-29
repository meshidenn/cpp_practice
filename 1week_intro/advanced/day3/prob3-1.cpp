#include <iostream>
#include <string>
 

template <typename T>
T max(T a, T b) {
  if(a > b) {
    return a;
  }
  return b;
}

int main() {
  std::cout << max<int> (1, 2) << std::endl;
  std::cout << max<double> (1.75, 3.12) << std::endl;
  std::string s1 = "aiu";
  std::string s2 = "eo";
  std::cout << ::max<std::string> (s1, s2) << std::endl;
  return 0;
}
