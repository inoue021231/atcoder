#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  if(N % 400 == 0 || (N % 4 == 0 && N % 100 != 0)) {
    cout << 366 << endl;
  } else {
    cout << 365 << endl;
  }
  return 0;
}