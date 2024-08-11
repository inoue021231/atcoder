#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    int m = 0;

    for(int i = 0; i < N; i++) {
        cin >> S[i];
        m = max(m, (int)S[i].length());
    }

    vector<string> ans(m, string(N, '*'));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < S[i].length(); j++) {
            ans[j][N-i-1] = S[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        int len = ans[i].length();
        while(len > 0 && ans[i][len-1] == '*') {
            len--;
        }
        cout << ans[i].substr(0, len) << endl;
    }

    return 0;
}
