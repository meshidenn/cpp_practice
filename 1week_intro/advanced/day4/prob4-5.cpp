#include <iostream>
#include <list>
#include <string>

using namespace std;

int main () {
  list<int> li;
  list<int>::iterator itr;
  int n = 0;

  while (1){
    cout << "正の整数を入力:";
    cin >> n;
    if ( n == -1){
      break;
    }
    li.push_back(n);
  }

  cout << "output start" << endl;
  itr = li.begin();
  cout << *itr << endl;
  itr = li.end();
  itr--;
  cout << *itr << endl;

  li.remove(2);

  for(itr = li.begin(); itr != li.end(); itr++){
    cout << *itr << " ";
  }
  cout << endl;
}
    

  
  
      

