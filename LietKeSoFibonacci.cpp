#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f[93];

void ktao()
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 92; i++)
        f[i] = f[i-1] + f[i-2];
}

void solve()
{
    int a, b;
    cin >> a >> b;
    if(a > b)
        swap(a, b);
    for(int i = a; i<= b; i++)
        cout << f[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin>>t;
    ktao();
    while(t--)
        solve();
    return 0;
}