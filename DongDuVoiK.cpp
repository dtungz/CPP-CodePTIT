#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
    if(a == 0 || b == 0)
        return a + b;
    while(b)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void solve()
{
    int n;  cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int res = 0;
    for(int i = 1; i < n ; i++)
        res = gcd(res, abs(a[i] - a[0]));
    int cnt = 0;
    for(int i = 1; i * i <= res; i++)
    {
        if(res % i == 0)
        {
            cnt++;
            if(i * i != res) cnt++;
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