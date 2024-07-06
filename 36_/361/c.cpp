#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;
  vector<ll> A(N);
  for(ll i = 0; i < N; i++) cin >> A[i];
  sort(A.begin(), A.end());

  ll ans = A.back() - A[0];
  ll ans_len = N - K;
  for(ll i = 0; i <= N - ans_len; i++) {
    ll buff = A[i+ans_len-1] - A[i];
    if(ans > buff) {
      ans =  buff;
    }
  }

  cout << ans << endl;
  return 0;
}