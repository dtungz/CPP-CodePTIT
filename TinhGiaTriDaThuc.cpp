#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;

void solve()
{
    ll n, powi;   cin >> n >> powi;
    ll a[n];
    for(int i = 0; i< n; i++)
        cin >> a[i];
    ll ans = 0;
    ll pow = 1;
    //cout << " hello " << endl;
    for(int i = n - 1; i>= 0; i--)
    {
        //cout << " hello " << endl;
        ans =(ans + ((a[i] % mod) * (pow % mod))  % mod) % mod;
        pow = (pow * powi) % mod;
    }
    cout << ans % mod << endl;
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