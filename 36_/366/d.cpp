#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, Q;
  cin >> N;
  vector<vector<vector<ll>>> A(N+1, vector<vector<ll>>(N+1, vector<ll>(N+1, 0)));
  vector<vector<vector<ll>>> S(N+1, vector<vector<ll>>(N+1, vector<ll>(N+1, 0)));

  for(ll i = 1; i <= N; i++) {
    for(ll j = 1; j <= N; j++) {
      for(ll k = 1; k <= N; k++) {
        cin >> A[i][j][k];
      }
    }
  }

  cin >> Q;

  for(ll x = 1; x <= N; x++) {
    for(ll y = 1; y <= N; y++) {
      for(ll z = 1; z <= N; z++) {
        S[x][y][z] = A[x][y][z]
                    + S[x-1][y][z]
                    + S[x][y-1][z]
                    + S[x][y][z-1]
                    - S[x-1][y-1][z]
                    - S[x-1][y][z-1]
                    - S[x][y-1][z-1]
                    + S[x-1][y-1][z-1];
      }
    }
  }

  for(ll i = 0; i < Q; i++) {
    ll Lx, Rx, Ly, Ry, Lz, Rz;
    cin >> Lx >> Rx >> Ly >> Ry >> Lz >> Rz;
    ll ans = S[Rx][Ry][Rz]
            - S[Lx-1][Ry][Rz]
            - S[Rx][Ly-1][Rz]
            - S[Rx][Ry][Lz-1]
            + S[Lx-1][Ly-1][Rz]
            + S[Lx-1][Ry][Lz-1]
            + S[Rx][Ly-1][Lz-1]
            - S[Lx-1][Ly-1][Lz-1];
    cout << ans << endl;
  }
  return 0;
}