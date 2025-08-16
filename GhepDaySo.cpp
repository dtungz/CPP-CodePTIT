#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;   cin >> n >> k;
    ll len = n * k;
    ll a[len];
    for(ll &it : a)
        cin >> it;
    sort(a, a + len);
    for(auto it : a)
        cout << it << " ";
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