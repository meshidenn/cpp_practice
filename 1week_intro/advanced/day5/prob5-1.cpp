#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  map <string, string> animal;
  string en_names[] = {"cat", "dog", "bird", "tiger"};
  string jp_names[] = {"猫", "犬", "鳥", "トラ"};
  string s;
  map<string, string>::iterator itr;
  for (int i = 0; i < 4; i++){
    animal[en_names[i]] = jp_names[i];
  }

  cout << "英語で動物の名前を入力してください:";
  cin >> s;
  
  itr = animal.find(s);

  if (itr != animal.end()){
    cout << "「" << animal[s] << "」" << "です。" << endl;
  } else {
    cout << "対応するデータは登録されていません。" << endl;
  }
}
      
