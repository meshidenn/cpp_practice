#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  map <string, string> kansuji;
  string alabian[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
  string kanji[] = {"◯"," 一", "二", "三", "四", "五", "六", "七", "八", "九"};
  string s, o = "", c;
  int check;
  map <string, string>::iterator itr;
  for (int i = 0; i < 10; i++){
    kansuji[alabian[i]] = kanji[i];
  }

  cout << "整数を入力してください:";
  cin >> s;

  for (int i = 0; i < s.size(); i++){
    c = s[i];
    itr = kansuji.find(c);
    if (itr != kansuji.end()){
      o += kansuji[c];
      if ( (s.size() - i - 1) % 3 == 0 & i < s.size() - 1){
	o += ',';
      }
    } else {
      cout << "整数を入力してください" << endl;
      return 0;
    }
  }

  cout << "変換結果: " << o << endl;
  return 0;
}
      
