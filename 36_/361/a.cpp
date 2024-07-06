#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N, K, X;
  cin >> N >> K >> X;
  vector<int> A(N+1);
  for(int i = 0; i < N; i++) cin >> A[i];
  A.insert(A.begin() + K, X);
  for(int i = 0; i <= N; i++) cout << A[i] << " ";
  cout << endl;
  return 0;
}