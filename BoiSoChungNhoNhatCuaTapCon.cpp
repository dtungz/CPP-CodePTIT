#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

const int mod = 10007;

void solve(int t)
{
    int n;  cin >> n;
    int a[n];
    FOE(it, a)  cin >> it;
    int ans = 0;



    cout << "Case " << t <<": " << ans << endl;       
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;    cin >> t;
    for(int i = 1; i <= t; i++)
        solve(i);
    return 0;
}