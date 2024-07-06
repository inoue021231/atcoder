#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = 0;
  cin >> N;
  vector<int> A(2*N);
  for(int i = 0; i < 2*N; i++) cin >> A[i];

  for(int i = 0; i+2 < 2*N; i++) {
    if(A[i] == A[i+2]) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}