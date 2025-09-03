#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countDivisors(int n, int p)
{
    int cnt = 0;
    while(n)
    {
        n/=p;
        cnt += n;
    }
    return cnt;
}

void solve()
{
    int n,  p;  cin >> n >> p;
    cout << countDivisors(n, p) << "\n";
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