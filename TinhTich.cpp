#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;   cin >> n >> m;
    ll maxA = -INT_MAX;
    ll minB = INT_MAX;
    for(int i = 1; i<= n; i++)
    {
        ll tmp;    cin >> tmp;
        maxA = max(maxA, tmp);
    }
    for(int i = 1; i<= m; i++)
    {
        ll tmp; cin >> tmp;
        minB = min(minB, tmp);
    }
    cout << maxA * minB << endl;
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