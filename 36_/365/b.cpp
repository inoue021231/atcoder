#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  vector<pair<ll,ll>> A(N);
  for(ll i = 0; i < N; i++) {
    ll a;
    cin >> a;
    A[i].first = a;
    A[i].second = i;
  }

  sort(A.rbegin(), A.rend());

  cout << A[1].second + 1 << endl;

  return 0;
}