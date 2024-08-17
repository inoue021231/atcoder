#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll N, K;
vector<ll> R;
vector<vector<ll>> ans;

void solve(vector<ll>& seq, ll index) {
  if(index == N) {
    ll sum = 0;
    for (ll i = 0; i < N; i++) {
      sum += seq[i];
    }
    if(sum % K == 0) {
      ans.push_back(seq);
    }
    return;
  }

  for(ll i = 1; i <= R[index]; i++) {
    seq[index] = i;
    solve(seq, index + 1);
  }
}

int main() {
  cin >> N >> K;
  R.resize(N);

  for(ll i = 0; i < N; i++) cin >> R[i];

  vector<ll> seq(N);

  solve(seq, 0);

  sort(ans.begin(), ans.end());

  for(const auto& seq : ans) {
    for(ll i = 0; i < N; i++) {
      cout << seq[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
