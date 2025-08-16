#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, d;    cin >> n >> d;
    ll a[n];
    for(ll &it : a) cin >> it;
    d %= n;
    for(ll i = d; i < n; i++)
        cout << a[i] << " ";
    for(ll i = 0; i< d; i++)
        cout << a[i] << " ";
    cout << endl;
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