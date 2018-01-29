#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
  set<string> alphabet;
  string s, o = "", c;
  set<string>::iterator itr;

  cout << "英単語を入力:";
  cin >> s;

  for (int i = 0; i < s.size(); i++){
    c = s[i];
    alphabet.insert(c);
  }

  cout << endl;
  cout << "使用されているアルファベット: ";
  for (itr = alphabet.begin(); itr != alphabet.end(); itr++){
    cout << *itr;
  }
  cout << endl;
  return 0;
}
      
