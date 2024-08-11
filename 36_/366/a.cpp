#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, T, A;
  cin >> N >> T >> A;

  if(T > N / 2 || A > N / 2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}