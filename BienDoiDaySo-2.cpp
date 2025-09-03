#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;   cin >> n;
    vector<ll> v(n + 2, 1);
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    for(int i = 1; i<= n; i++)
    {
        ll temp = v[i - 1] * v[i + 1];
        if(i == 1 || i == n)
            temp *= v[i];
        cout << temp << " ";
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