#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int flag = 0;

  for(int i = 0; i < 3; i++) {
    if(s[i] == 'M') {
      if(i == 2) {
        flag = 1;
      } else if(i == 1 && s[0] == 'R') {
        flag = 1;
      } 
    }
  }
  
  if(flag == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}