#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll R, G, B;
  cin >> R >> G >> B;
  string C;
  cin >> C;
  ll ans;
  if(C == "Red") {
    ans = min(G,B);
  } else if(C == "Green") {
    ans = min(R,B);
  } else {
    ans = min(R,G);
  }
  
  cout << ans << endl;
  return 0;
}