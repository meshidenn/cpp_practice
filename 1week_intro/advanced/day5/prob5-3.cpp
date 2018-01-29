#include <iostream>
#include <string>
#include <stdio.h>
#include <set>

using namespace std;

int main(){
  set<int> num;
  set<int>::iterator it;
  int n;
  
  cout << "乱数: ";
  for (int i = 0; i < 10; i++){
    n = rand() % 10 + 1;
    cout << n << " ";
    num.insert(n);
  }
  cout << endl;
  cout << "出現した数: ";
  for (it = num.begin(); it != num.end(); it++){
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}
