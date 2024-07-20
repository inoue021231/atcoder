#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll H, W, Y;
  cin >> H >> W >> Y;
  vector<vector<ll>> A(H+2, vector<ll>(W+2, 0));
  for(ll i = 1; i <= H; i++) {
    for(ll j = 1; j <= W; j++) {
      cin >> A[i][j];
    }
  }

  for(ll k = 1; k <= Y; k++) {
    ll ans = H * W;

    for(ll i = 0; i < H; i++) {
      for(ll j = 0; j < W; j++) {
        
      }
    }

    cout << ans << endl;
  }
  for(ll i = 0; i < H + 2; i++) {
    for(ll j = 0; j < W + 2; j++) {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}