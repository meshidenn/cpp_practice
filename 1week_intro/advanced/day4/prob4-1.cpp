#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  vector<int> even;
  vector<int> odd;
  int n = 0;

  while (1){
    cout << "正の整数を入力:";
    cin >> n;
    if ( n == -1){
      break;
    }
    else if ( n % 2 == 1){
      odd.push_back(n);
    } else{
      even.push_back(n);
    }
  }

  cout << "偶数:";
  for ( int i = 0; i < even.size(); i++){
    cout << even[i] << " ";
  }
  cout << endl;
  cout << "奇数:";
  for ( int i = 0; i < odd.size(); i++){
    cout << odd[i] << " ";
  }
}
    

  
  
      

