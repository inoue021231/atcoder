#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  vector<pair<ll,ll>> LR(N);
  vector<ll> mid(N);
  ll ans = 0;
  
  for(ll i = 0; i < N; i++) {
    cin >> LR[i].first >> LR[i].second;
  };

  sort(LR.begin(), LR.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
        return (a.second - a.first) < (b.second - b.first);
  });

  for(ll i = 0; i < N; i++) cout << LR[i].first << " " << LR[i].second << endl;

  for(ll i = 0; i < N; i++) {
    if(ans > 0) {
      if(LR[i].first <= -ans && LR[i].second >= -ans) {
        mid[i] = -ans;
        ans = 0;
      } else {
        ans = ans - LR[i].second;
        mid[i] = LR[i].second;
      }
    } else if(ans < 0) {
      if(LR[i].second >= ans && LR[i].first <= ans) {
        mid[i] = ans;
        ans = 0;
      } else {
        ans = ans + LR[i].first;
        mid[i] = LR[i].first;
      }
    } else {
      if(LR[i].first <= 0 && LR[i].second >= 0) {
        ans = 0;
        mid[i] = 0;
      } else {
        if(min(abs(LR[i].first), abs(LR[i].second)) == abs(LR[i].first)) {
          ans = LR[i].first;
          mid[i] = LR[i].first;
        } else {
          ans = LR[i].second;
          mid[i] = LR[i].second;
        }
      }
    }
  }

  if(ans == 0) {
    cout << "Yes" << endl;
    for(ll i = 0; i < N; i++) cout << mid[i] << " ";
    cout << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}