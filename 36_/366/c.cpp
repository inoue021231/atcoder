#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll Q;
  cin >> Q;
  
  unordered_map<ll, ll> ball_count;
  ll type_count = 0;

  for (ll i = 0; i < Q; i++) {
    ll query_type;
    cin >> query_type;

    if(query_type == 1) {
      ll x;
      cin >> x;
      if(ball_count[x] == 0) {
        type_count++;
      }
      ball_count[x]++;
    } else if(query_type == 2) {
      ll x;
      cin >> x;
      ball_count[x]--;
      if(ball_count[x] == 0) {
        type_count--;
      }
    } else if(query_type == 3) {
      cout << type_count << endl;
    }
  }

  return 0;
}
