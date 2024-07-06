#include <iostream>
#include <string>
#include <vector>

using ll = long long;

const ll MOD = 998244353;

// 部分文字列が回文かどうかを判定する関数
bool isPalindrome(const std::string& s, ll start, ll length) {
    ll left = start;
    ll right = start + length - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// 与えられた文字列が良い文字列かどうかを判定する関数
bool isGoodString(const std::string& s, ll K) {
    ll N = s.size();
    for (ll i = 0; i <= N - K; ++i) {
        if (isPalindrome(s, i, K)) {
            return false;
        }
    }
    return true;
}

// ? を置き換えたすべての文字列を生成し、良い文字列の数をカウントする関数
ll countGoodStrings(const std::string& S, ll K) {
    ll N = S.size();
    ll q = 0;
    std::vector<ll> questionMarks;

    // ? の位置を保存
    for (ll i = 0; i < N; ++i) {
        if (S[i] == '?') {
            questionMarks.push_back(i);
            q++;
        }
    }

    ll totalMasks = 1 << q; // 2^q 通りの置換
    ll goodCount = 0;

    // 全ての置換パターンを試す
    for (ll mask = 0; mask < totalMasks; ++mask) {
        std::string T = S;
        for (ll j = 0; j < q; ++j) {
            T[questionMarks[j]] = (mask & (1 << j)) ? 'B' : 'A';
        }

        // T が良い文字列かどうかをチェック
        if (isGoodString(T, K)) {
            goodCount = (goodCount + 1) % MOD;
        }
    }

    return goodCount;
}

int main() {
    std::string S;
    ll K;
    std::cin >> S >> K;

    ll result = countGoodStrings(S, K);
    std::cout << result << std::endl;

    return 0;
}
