//Chưa rõ

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end());

    long long result = 0;
    for (int i = 0; i < N; i++) {
        // A[i] xuất hiện (i lần với dấu +) và (N-i-1 lần với dấu -)
        result += 1LL * A[i] * (2 * i - N + 1);
    }

    cout << result << "\n";
    return 0;
}
