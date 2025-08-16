#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;   cin >> n;
    int cnt = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if(i % 2 == 0)
                cnt ++;
            if(i *i != n && (n/i) % 2 == 0)
                cnt++;
        }
    }
    cout << cnt << endl;
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