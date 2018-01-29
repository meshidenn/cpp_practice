#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  vector< vector<int> >v1;
  int n = 0;
  int res = 0;

  v1.resize(10);
  while (1){
    cout << "正の整数を入力:";
    cin >> n;
    if ( n == -1){
      break;
    }
    res = n % 10;
    v1[res].push_back(n);   
  }

  for (int i = 0; i < 10; i++) {
    cout << "一の位が" << i << ":";
    if (v1[i].size() == 0) {
      cout << "なし" << endl;
      continue;
    }
    for(int j = 0; j < v1[i].size(); j++) {
      cout << v1[i][j] << " ";
    }
    cout << endl;
  }
}    

  
  
      

