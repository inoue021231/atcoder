#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, T;
  cin >> N >> T;
  vector<ll> A(T);
  vector<vector<ll>> S(N,vector<ll>(N,0));
  for(ll i = 0; i < T; i++) {
    ll ii;
    cin >> ii;
    ll jj = (ii + N - 1) / N;
    ii = ii % N;
    if(ii == 0) {
      ii = N;
    }
    S[jj-1][ii-1] = i+1;
  }

  ll ans = T + 1;

  for(ll i = 0; i < N; i++) {
    ll a = -1;
    for(ll j = 0; j < N; j++) {
      if(S[i][j] != 0) {
        a = max(a, S[i][j]);
      } else {
        a = -1;
        break;
      }
    }
    if(a != -1) {
      ans = min(a, ans);
    }
  }

  for(ll i = 0; i < N; i++) {
    ll a = -1;
    for(ll j = 0; j < N; j++) {
      if(S[j][i] != 0) {
        a = max(a, S[j][i]);
      } else {
        a = -1;
        break;
      }
    }
    if(a != -1) {
      ans = min(a, ans);
    }
  }

  ll a = -1;
  for(ll i = 0; i < N; i++) {
    if(S[i][i] != 0) {
      a = max(a, S[i][i]);
    } else {
      a = -1;
      break;
    }
  }
  if(a != -1) {
    ans = min(a, ans);
  }

  a = -1;
  for(ll i = 0; i < N; i++) {
    if(S[i][N-1-i]) {
      a = max(a, S[i][N-1-i]);
    } else {
      a = -1;
      break;
    }
  }
  if(a != -1) {
    ans = min(a, ans);
  }

  if(ans == T+1) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  
  

  return 0;
}