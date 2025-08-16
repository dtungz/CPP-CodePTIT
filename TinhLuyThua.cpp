#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll p;

ll powfi(ll x, ll y)
{
    if(y == 1)
        return x%p;
    ll temp = powfi(x, y/2);
    ll ans = (temp * temp) % p;
    if(y % 2 == 0)
        return ans;
    return (ans * x) % p;
}

void solve()
{
    ll x, y;
    cin >> x >> y >> p;
    cout << powfi(x, y) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin>>t;
    while(t--)
        solve();
    return 0;
}