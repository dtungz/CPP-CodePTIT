//Chưa rõ

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    long long ans = 0;
    long long cnt = 1; 

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
        } else {
            ans += cnt * (cnt - 1) / 2; 
            cnt = 1;
        }
    }
    ans += cnt * (cnt - 1) / 2;

    cout << ans << "\n";
    return 0;
}
