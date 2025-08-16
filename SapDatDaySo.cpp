#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    unordered_set<ll>st;
    ll n;   cin >> n;
    for(int i = 0; i< n; i++)
    {
        ll tmp;    cin >> tmp;
        st.insert(tmp);
    }
    for(ll i = 0; i< n;i++)
    {
        if(!st.count(i))
            cout << -1 << " ";
        else cout << i << " ";
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