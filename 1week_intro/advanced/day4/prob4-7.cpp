#include <iostream>
#include <list>
#include <string>

using namespace std;

int main () {
  list<string> li;
  list<string>::iterator itr;
  string s;

  while (1){
    cout << "文字列を入力:";
    getline(cin,  s);
    if (s.empty()){
      break;
    }
    li.push_back(s);
  }

  for(itr = li.begin(); itr != li.end(); itr++){
    if (4 < itr->length()){
      li.erase(itr);
    }
  }
  cout << "5文字未満の単語:";
  for(itr = li.begin(); itr != li.end(); itr++){
    cout << *itr << " ";
  }
  cout << endl;
}
    

  
  
      

