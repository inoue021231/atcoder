#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll countPalindromes(int length) {
    if (length == 1) {
        return 10;
    }
    int half_length = (length + 1) / 2;
    return 9 * pow(10, half_length - 1);
}

string generateNthPalindrome(ll n) {
    ll count = 0;
    int length = 1;

    if (n <= 10) {
        return to_string(n - 1);
    }

    while (true) {
        ll current_count = countPalindromes(length);
        if (count + current_count >= n) {
            break;
        }
        count += current_count;
        length++;
    }

    cout << length << endl;

    int half_length = (length + 1) / 2;
    ll start = pow(10, half_length - 1);
    ll index_within_length = n - count - 1;
    ll first_half_num = start + index_within_length;

    cout << first_half_num << endl;

    string first_half = to_string(first_half_num);
    string second_half = first_half.substr(0, length / 2);
    reverse(second_half.begin(), second_half.end());

    return first_half + second_half;
}

int main() {
    ll N;
    cin >> N;

    string palindrome = generateNthPalindrome(N);
    cout << palindrome << endl;

    return 0;
}
