#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  vector<string> sv1;
  vector<int> maxv, minv;
  string s = "";
  int max = 0, min = 1000000000;
  int n = 0,l = 0;

  while (1){
    cout << max << ',' << min << endl;    
    cout << "文字列を入力:";
    getline(cin, s);
    if (s.empty()){
      break;
    }
    sv1.push_back(s);
    l = s.length();
    if (max < l){
      max = l;
      maxv.clear();
      maxv.push_back(n);
    } else if (max == l){
      maxv.push_back(n);
    }
    if (l < min){
      min = l;
      minv.clear();
      minv.push_back(n);
    } else if (min == l){
      minv.push_back(n);
    }
    n++;
  }
  
  cout << endl;
  cout << "最長の単語:";
  for (int i = 0; i < maxv.size(); i++) {
    cout << sv1[maxv[i]] << " ";
  }
  cout << endl;
  cout << "最短の単語:";
  for (int i = 0; i < minv.size(); i++) {
    cout << sv1[minv[i]] << " ";
  }
  cout << endl;
}

