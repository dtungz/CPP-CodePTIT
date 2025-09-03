#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n, x;    cin >> n >> x;
    vector<ll> v(n);
    for(ll& it : v) cin >> it;
    unordered_set<ll> visited;
    for(auto it : v)
    {
        if(visited.count(it + x) || visited.count(it - x))
        {
            cout << "1\n";
            return;
        }
        visited.insert(it);
    }
    cout << "-1\n";
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