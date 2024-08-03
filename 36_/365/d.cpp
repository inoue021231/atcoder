#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    string S;
    cin >> N >> S;

    auto win_hand = [](char hand) {
        if (hand == 'R') return 'P';
        if (hand == 'P') return 'S';
        if (hand == 'S') return 'R';
        return ' ';
    };

    char prev = ' ';
    ll ans = 0;

    for (int i = 0; i < N; ++i) {
        char aoki = S[i];
        char best_hand = win_hand(aoki);

        if (best_hand == prev) {
            if (best_hand == 'R') best_hand = 'S';
            else if (best_hand == 'P') best_hand = 'R';
            else if (best_hand == 'S') best_hand = 'P';
        }

        if ((aoki == 'R' && best_hand == 'P') ||
            (aoki == 'P' && best_hand == 'S') ||
            (aoki == 'S' && best_hand == 'R')) {
            ans++;
        }

        prev = best_hand;
    }

    cout << ans << endl;
    return 0;
}
