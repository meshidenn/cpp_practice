#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
  stack<string> stk;
  string s;

  while(1){
    cout << "文字列を入力:" ;
    getline(cin, s);
    if (s.empty()){
      break;
    }
    stk.push(s);
  }

  while(!stk.empty()){
    cout << stk.top() << endl;
    stk.pop();
  }
  return 0;
}
    
    
