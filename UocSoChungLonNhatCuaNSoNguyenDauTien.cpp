#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b)
{
    ll x = a, y = b;
    while(b != 0)
    {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return x / a * y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin >> t; 
    while(t--)
    {
        ll n;  cin >> n;
        ll ans = 1;
        for(ll i = 2; i<= n; i++)
            ans = lcm(ans, i);
        cout << ans << endl;
    }
}