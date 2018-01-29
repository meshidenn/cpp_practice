#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  vector<int> v1;
  int n = 0;

  while (1){
    cout << "正の整数を入力:";
    cin >> n;
    if ( n == -1){
      break;
    }
    v1.push_back(n);
  }

  cout << "最大値: " <<  *max_element(v1.begin(), v1.end())  << endl;
  cout << "最小値: " <<  *min_element(v1.begin(), v1.end())  << endl;
}
    

  
  
      

