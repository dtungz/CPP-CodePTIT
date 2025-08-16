#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;  cin >> n;
    ll ans = 0;
    for(int i = 0; i< n; i++)
    {
        ll tmp; cin >> tmp;
        ans = max(ans, tmp);
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