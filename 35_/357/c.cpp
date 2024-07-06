#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void print_carpet(const vector<vector<char>>& carpet) {
    for (const auto& row : carpet) {
        for (char cell : row) {
            cout << cell;
        }
        cout << endl;
    }
}

vector<vector<char>> generate_carpet(ll N) {
    if (N == 0) {
        return {{'#'}};
    }
    
    auto prev_carpet = generate_carpet(N - 1);
    ll size = prev_carpet.size();
    vector<vector<char>> new_carpet(size * 3, vector<char>(size * 3));
    
    for (ll i = 0; i < 3; ++i) {
        for (ll j = 0; j < 3; ++j) {
            if (i == 1 && j == 1) {
                for (ll x = 0; x < size; ++x) {
                    for (ll y = 0; y < size; ++y) {
                        new_carpet[i * size + x][j * size + y] = '.';
                    }
                }
            } else {
                for (ll x = 0; x < size; ++x) {
                    for (ll y = 0; y < size; ++y) {
                        new_carpet[i * size + x][j * size + y] = prev_carpet[x][y];
                    }
                }
            }
        }
    }
    
    return new_carpet;
}

int main() {
    ll N;
    cin >> N;
    
    auto final_carpet = generate_carpet(N);
    print_carpet(final_carpet);
    
    return 0;
}
