#include <iostream>

int main(){
  std::string a,b;
  std::cout << "姓を入力:";
  std::cin >> a;
  std::cout << "名を入力:";
  std::cin >> b;
  std::cout << "名前は「" << a+b << "」です。" << std::endl;
  return 0;
}
