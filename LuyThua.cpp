#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int f(int n) {
    int ans = 1;
    for (int i = 2; i <= sqrt(n); i += 1) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt += 1;
                n /= i;
            }
            ans *= cnt + 1;
        }
    }
    if (n > 1) ans *= 2;
    return ans;
}
 
ll calPow(int n, int i) {
    if (i == 0) return 1LL;
    if (i % 2 == 0) {
        ll half = calPow(n, i / 2);
        return half * half;
    }
    return 1LL * n * calPow(n, i - 1);
}
 
void solve() {
    ll X;
    cin >> X;
    for (int i = 60; i >= 1; i -= 1) {
        int lo = 0, hi = (int)pow(X, 1.0 / i) + 5;
        int root = -1;
        while (lo <= hi) {
            int n = (lo + hi) >> 1;
            ll pow_val = calPow(n, i);
            if (pow_val == X) {
                root = n;
                break;
            } else if (pow_val > X) {
                hi = n - 1;
            } else {
                lo = n + 1;
            }
        }
        if (root != -1 && f(root) == i) {
            cout << root << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc = 1;
    // cin >> tc;
    while(tc--) {
        solve();
    }
}