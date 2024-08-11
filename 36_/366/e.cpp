#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, D;
  cin >> N >> D;

  vector<pair<ll, ll>> points(N);
  for (ll i = 0; i < N; i++) {
    cin >> points[i].first >> points[i].second;
  }

  ll result = 0;

  // 各点を中心にして、範囲内の点を調べる
  for (const auto& p : points) {
    ll px = p.first;
    ll py = p.second;

    // 範囲内の座標をチェック
    for (ll x = px - D; x <= px + D; x++) {
      for (ll y = py - D; y <= py + D; y++) {
        // マンハッタン距離を計算
        ll total_d = 0;
        for (const auto& q : points) {
          total_d += abs(x - q.first) + abs(y - q.second);
        }

        // 条件に合う点をカウント
        if (total_d <= D) {
          result++;
        }
      }
    }
  }

  cout << result << endl;

  return 0;
}
