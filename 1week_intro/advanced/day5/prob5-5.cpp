#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
  queue<string> que;
  string s;

  while(1){
    cout << "文字列を入力:" ;
    getline(cin, s);
    if (s.empty()){
      break;
    }
    que.push(s);
  }

  while(!que.empty()){
    cout << que.front() << endl;
    que.pop();
  }
  return 0;
}
    
    
