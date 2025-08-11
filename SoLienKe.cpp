#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool LienKe(ll n)
{
    while(n/10)
    {
        int temp = n%10;
        n/=10;
        if(abs(n%10 - temp) != 1)
            return false;
    }
    return true;
}

void solve()
{
    ll n;   cin >> n;
    if(LienKe(n))
        cout << "YES\n";
    else cout << "NO\n";
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