#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  vector<int> n_list(N,0);

  vector<int> over_list;

  for(int i = 0; i < N; i++) {
    int aa;
    cin >> aa;
    a[i] = --aa;  
  } 

  for(int i = 0; i < N; i++) {
    int w;
    cin >> w;
    if(n_list[a[i]] == 0) {
      n_list[a[i]] = w;
    } else {
      int ww = min(n_list[a[i]], w);
      int www = max(n_list[a[i]], w);
      over_list.push_back(ww);
      n_list[a[i]] = www;
    }
  }
  int cnt = 0;

  for(int i = 0; i < N; i++) {
    if(n_list[i] == 0) {
      cnt++;
    }
  }

  sort(over_list.begin(), over_list.end());
  int ans = 0;

  for(int i = 0; i < cnt; i++) {
    ans += over_list[i];
  }

  cout << ans << endl;

  return 0;
}

/* int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> p(N);
  vector<int> a(N);
  vector<int> w(N);
  vector<int> n_list(N,0);

  int ans = 0;

  for(int i = 0; i < N; i++) {
    cin >> a[i];
    n_list[a[i]-1]++;
  } 

  for(int i = 0; i < N; i++) {
    int w;
    cin >> w;
    p[i] = make_pair(w,a[i]-1);
  }

  sort(p.begin(), p.end());

  for(int i = 0; i < N; i++) {
    if(n_list[i] == 0) {
      for(int j = 0; j < p.size(); j++) {
        if(n_list[p[j].second] >= 2) {
          ans += p[j].first;
          n_list[i]++;
          n_list[p[j].second]--;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
} */