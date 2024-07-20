#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll R;
  cin >> R;
  if(R < 100) {
    cout << 100 - R << endl;
  } else if(R < 200) {
    cout << 200 - R << endl;
  } else if(R < 300) {
    cout << 300 - R << endl;
  }
  return 0;
}