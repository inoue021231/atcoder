#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  double X;
  cin >> X;

  stringstream ss;
  ss << fixed << setprecision(3) << X;
  string result = ss.str();

  while(result.back() == '0') {
      result.pop_back();
  }

  if(result.back() == '.') {
      result.pop_back();
  }

  cout << result << endl;
  return 0;
}