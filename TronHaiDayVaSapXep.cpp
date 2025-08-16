#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for(ll &it : a) cin >> it;
    for(ll &it : b) cin >> it;
    sort(a, a + n);
    sort(b, b + m);
    int l = 0, r = 0;
    while(l < n && r < m)
    {
        if(a[l] < b[r])
        {
            cout << a[l] << " ";
            l++;
        }
        else
        {
            cout << b[r] << " ";
            r++;
        }
    }
    while(l < n)
    {
        cout << a[l] << " ";
        l++;
    }
    while(r < m)
    {
        cout << b[r] << " ";
        r++;
    }
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