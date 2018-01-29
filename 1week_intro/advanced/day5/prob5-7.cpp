#include <iostream>
#include <string>
#include <set>
#include <stack>

using namespace std;

int main() {
  stack<string> stk;
  string s, c;
  set<string>::iterator itr;

  cout << "英単語を入力:";
  cin >> s;

  for (int i = 0; i < s.size(); i++){
    c = s[i];
    stk.push(c);
  }

  cout << endl;
  while (!stk.empty() ) {
    cout << stk.top();
    stk.pop();
  }
  cout << endl;
  return 0;
}
      
