//Chưa rõ

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;
    int n = s.size();

    unordered_map<int,int> best;
    best.reserve(n*2);
    best.max_load_factor(0.7);

    vector<int> dp(n+1, 1e9);
    int mask = 0;

    best[0] = 0; // dp[0] = 0

    for (int i = 1; i <= n; i++) {
        int c = s[i-1] - 'a';
        mask ^= (1 << c);

        int val = INT_MAX;

        // same mask
        if (best.count(mask)) val = min(val, best[mask] + 1);

        // differ by one bit
        for (int k = 0; k < 26; k++) {
            int m2 = mask ^ (1 << k);
            if (best.count(m2)) val = min(val, best[m2] + 1);
        }

        dp[i] = val;
        if (!best.count(mask)) best[mask] = dp[i];
        else best[mask] = min(best[mask], dp[i]);
    }

    cout << dp[n] << "\n";
    return 0;
}
