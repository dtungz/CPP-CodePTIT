#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a, m;   cin >> a >> m;
    int ans = -1;
    for(int x = 0; x < m; x++)
    {
        if(a * x % m == 1)
        {
            ans = x;
            break;
        }
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