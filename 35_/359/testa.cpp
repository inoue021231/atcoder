#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for(int i = 0; i < N; i++) cin >> S[i];
  int count = 0;
  for(int i = 0; i < N; i++) {
    if(S[i] == "Takahashi") {
      count++;
    }
  } 

  cout << count << endl;
  return 0;
}