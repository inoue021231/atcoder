#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a,b,c,d,e,f,g,h,i,j,k,l;
  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
  if((d > g && e > h && f > i) && (j > a && k > b && l > c)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}