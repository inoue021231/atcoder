#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;



  if(B < C) {
    if(A >= B && A < C) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  } else {
    if(A >= B || A < C) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }
  return 0;
}