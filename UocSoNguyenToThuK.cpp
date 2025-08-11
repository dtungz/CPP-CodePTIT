#include <bits/stdc++.h>
using namespace std;
#define ll long long

int Pos(int n, int k)
{
    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            k--;
            n/=i;
            if(k == 0)
                return i;
        }
    }
    if(n > 1 && k == 1)
        return n;
    return -1;
}

void solve()
{
    int n, k;  cin >> n >> k;
    cout << Pos(n, k) << endl;
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