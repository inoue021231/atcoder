#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;
  vector<ll> A(N + 1);

  for(ll i = 1; i <= N; i++) cin >> A[i];

  vector<ll> Z(N + 1, 0);
  vector<ll> remain1(M, 0);
  vector<ll> remain2(M, 0);

  for(ll i = 1; i <= N; i++) {
    Z[i] = Z[i - 1] + A[i];
    remain1[Z[i] % M]++;
  }

  for(ll i = 1; i <= N; i++) {
    Z[i] = Z[i - 1]
  }

  ll ans = 0;
  for(ll i = 1; i <= N; i++) {
    ll r = Z[i] % M;
    ans += remain1[r] - 1;
  }

  cout << ans << endl;

  return 0;
}