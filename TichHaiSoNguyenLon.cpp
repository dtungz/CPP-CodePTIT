#include <bits/stdc++.h>
using namespace std;

string multiply(string a, string b) {
    int n = a.size(), m = b.size();
    vector<int> res(n + m, 0);

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int mul = (a[i] - '0') * (b[j] - '0');
            int sum = mul + res[i + j + 1];
            res[i + j + 1] = sum % 10;
            res[i + j] += sum / 10;
        }
    }

    // chuyển về string
    string s = "";
    int i = 0;
    while (i < res.size() && res[i] == 0) i++;
    for (; i < res.size(); i++) s.push_back(res[i] + '0');

    return s.empty() ? "0" : s;
}

void solve() {
    string a, b;
    cin >> a >> b;
    cout << multiply(a, b) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}
