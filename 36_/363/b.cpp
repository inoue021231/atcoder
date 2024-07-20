#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, T, P;
  cin >> N >> T >> P;

  vector<ll> L(N);
  for(ll i = 0; i < N; i++) cin >> L[i];
  ll ans = 0;
  while(true) {
    ll count = 0;
    for(ll i = 0; i < N; i++) {
      if(L[i] >= T) {
        count++;
      }
      L[i]++;
    }
    if(count >= P) {
      cout << ans << endl;
      break;
    }
    ans++;
  }
  return 0;
}