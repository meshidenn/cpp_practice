#include <iostream>

int main(){
  int a,b;
  std::cout << "一つ目の数:";
  std::cin >> a;
  std::cout << "二つ目の数:";
  std::cin >> b;
  std::cout << a << "+" << b << "=" << a+b << std::endl;
  std::cout << a << "-" << b << "=" << a-b << std::endl;
  return 0;
}
