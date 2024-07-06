#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll count, string S, string s, string t, vector<string> sss) {
  if(s == t) {
    return count;
  } else if(s == S && count != 1) {
    return -1;
  }

  cout << s << endl;

  ll null_index = 0;
  ll ans = -1;

  for(int i = 0; i < s.length(); i++) {
    if(s[i] == '.') {
      null_index = i;
      break;
    }
  }
  for(int i = 0; i < s.length() - 1; i++) {
    string ss = s;
    ss[null_index] = s[i];
    ss[null_index+1] = s[i+1];
    ss[i] = '.';
    ss[i+1] = '.';
    int continue_flag = 0;
    for(int i = 0; i < sss.size(); i++) {
      if(sss[i] == ss) {
        continue_flag = 1;
      }
    }

    if(continue_flag == 1) {
      continue;
    }
    
    if(s[i] != '.' && s[i+1] != '.') {
      sss.push_back(s);
      ll a = solve(count + 1, S, ss, t, sss);
      if(a != -1) {
        if(ans == -1) {
          ans = a;
        } else {
          ans = min(ans, a);
        }
      }
    }
  }
  return ans;
}

int main() {
  ll N;
  cin >> N;
  string S, T;
  cin >> S >> T;
  S += "..";
  T += "..";

  cout << S << endl << T << endl;

  vector<string> sss;
  
  cout << solve(1, S, S, T, sss) << endl;

  return 0;
}