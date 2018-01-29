#include <iostream>
#include <list>
#include <string>

using namespace std;

int main () {
  list<int> li;
  list<int>::iterator itr, itrb, itre;
  int n = 0;

  cout << "正の整数を入力:";
  cin >> n;
  li.push_front(n);
  cout << "入力された数:";
  itr = li.end();
  itr--;
  cout << *itr << endl;

  while (1){
    cout << "正の整数を入力:";
    cin >> n;
    if ( n == -1){
      break;
    }
    itrb = li.begin();
    itre = li.end();
    itre--;
   if (n <= *itrb){
     cout << "front";
     li.push_front(n);
   } else if ( *itre <= n){
     cout << "end";
     li.push_back(n);
   } else {
     cout << "insert";
    for (itr=li.begin(); itr != li.end(); itr++){
      if (*itr <= n){
	itr++;
	if(n <= *itr){
	  li.insert(itr, n);
	  break;
	}
      }
    }
   }
    cout << endl;
    cout << "入力された数:";
    for(itr = li.begin(); itr != li.end(); itr++){
      cout << *itr << " ";
    }
    cout << endl;  
  }
}
    

  
  
      

