#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll a[21], n;
    a[1] = 1;
    cin >> n;
    ll S = 1;
    for(int i = 2; i <= n; i++)
    {
        a[i] = a[i-1] * i;
        S += a[i];
    }
    cout << S;
}