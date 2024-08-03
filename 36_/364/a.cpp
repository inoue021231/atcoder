#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int count = 0;
  int N;
  cin >> N;
  vector<string> S(N);
  for(int i = 0; i < N; i++) cin >> S[i];
  for(int i = 0; i < N; i++) {
    if(S[i] == "sweet") {
      count++;
      if(count == 2 && i != N-1) {
        count = -1;
        break;
      }
    } else {
      count = 0;
    }
  }

  if(count == -1) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;
}