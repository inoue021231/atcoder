#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++) cin >> A[i];

    ll totalCost = accumulate(A.begin(), A.end(), 0LL);
    if (totalCost <= M) {
        cout << "infinite" << endl;
        return 0;
    }

    ll left = 0, right = *max_element(A.begin(), A.end());
    ll result = -1;

    while (left <= right) {
        ll mid = (left + right) / 2;
        ll sum = 0;
        for (ll i = 0; i < N; i++) {
            sum += min(A[i], mid);
        }

        if (sum <= M) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << result << endl;

    return 0;
}
