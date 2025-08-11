#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;    cin >> n >> k;
    ll S = 0;
    for(int i = 1; i<= n; i++)
        S += i%k;
    cout << S << endl;
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