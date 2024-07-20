#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check_kaibun(string s) {
  string ss = s;
  reverse(s.begin(), s.end());
  return s == ss;
}

int main() {
  ll N, K;
  string S;
  set<string> permutations;
  cin >> N >> K;
  cin >> S;
  
  ll ans = 0;

  sort(S.begin(), S.end());

  do {
    permutations.insert(S);
  } while (next_permutation(S.begin(), S.end()));

  for (const auto &perm : permutations) {
    ll flag = 1;
    for(ll i = 0; i <= N-K; i++) {
      string sub_str = perm.substr(i,K);
      if(check_kaibun(sub_str)) {
        flag = 0;
        break;
      }
    }
    if(flag) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}