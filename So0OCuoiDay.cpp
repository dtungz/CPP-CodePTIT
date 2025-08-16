#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(ll a, ll b)
{
    if(a == 0 && b != 0)    return false;
    if(a != 0 && b == 0)    return true;
    return true;
}

void solve()
{
    ll n;  cin >> n;
    string s = "";
    for(ll i = 0; i< n; i++)
    {
        ll tmp; cin >> tmp;
        if(tmp == 0)    s += "0 ";
        else cout << tmp << " ";
    }
    cout << s << endl;
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