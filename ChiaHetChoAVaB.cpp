#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

ll step(ll m, ll n, ll a) {
    ll l = m; 
    ll r = n; 
    if (r < l) return 0;
    l = ((l + a - 1) / a) * a;
    r = (r / a) * a;           
    if (l > r) return 0;
    return (r - l) / a + 1;
}

void solve() {
    ll m, n, a, b;
    cin >> m >> n >> a >> b;
    ll cnt1 = step(m, n, a);
    ll cnt2 = step(m, n, b);
    ll cntBoth = step(m, n, lcm(a, b));
    cout << cnt1 + cnt2 - cntBoth << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}
