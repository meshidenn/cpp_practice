#include <iostream>
#include <string>
#include <map>
#include <queue>

using namespace std;

int main() {
  map <string, string> kansuji;
  string alabian[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
  string kanji[] = {"◯"," 一", "二", "三", "四", "五", "六", "七", "八", "九"};
  string s, c;
  queue<string> que;
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
      que.push(kansuji[c]);
      if ( (s.size() - i - 1) % 3 == 0 & i < s.size() - 1){
	que.push(",");
      }
    } else {
      cout << "整数を入力してください" << endl;
      return 0;
    }
  }
  
  cout << "変換結果: ";
  while(!que.empty()){
    cout << que.front();
    que.pop();
  }
  return 0;
}
      
