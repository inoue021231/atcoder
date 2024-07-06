#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> C(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> C[i];
    }

    vector<int> answer;

    for (int i = 0; i < N; ++i) {
        int flag = 0;
        for (int j = i + 1; j < N; j++) {
            if (A[i] < A[j] && C[i] > C[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) continue;
        answer.push_back(i + 1);
    }

    cout << answer.size() << endl;
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;

    return 0;
}
