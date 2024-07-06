#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;

  int i = 0;
  int s_len = S.length();
  int t_len = T.length();
  int w = s_len / t_len;


  int flag = 0;

  for(int i = s_len-1; i >= 1; i--) {
    vector<string> checkstr;
    int cnt = 0;
    while(true) {
      int index = 0;
      string substr = "";
      while(index < i && cnt < s_len) {
        substr += S[cnt];
        index++;
        cnt++;
      }
      checkstr.push_back(substr);
      if(cnt >= s_len) {
        break;
      }
    }

    for(int k = 0; k < checkstr[0].length(); k++) {
      string checkstr2 = "";
      for(int j = 0; j < checkstr.size(); j++) {
        if(checkstr[j].length()-1 >= k) {
          checkstr2 += checkstr[j][k];
        }
      }
      if(checkstr2 == T) {
        flag = 1;
      }
    }
  }

  if(flag == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}