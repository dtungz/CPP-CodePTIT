#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;   cin >> n;
    ll a[n], Up[n], Down[n];
    for(ll i = 0; i < n ; i++)
    {
        cin >> a[i];
        if(i == 0)
            Up[i] = a[i];
        else
            Up[i] = min(a[i], Up[i-1]);
    }
    Down[n-1] = a[n-1];
    for(ll i = n - 2; i >= 0; i--)
        Down[i] = max(a[i], Down[i + 1]);
    int ans = 0, l = 0, r = 0;
    while(l < n && r < n)
    {
        if(Up[l] < Down[r])
        {
            ans = max(ans, r - l);
            r++;
        }
        else
            l++;
    }
    cout << ans << endl;
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