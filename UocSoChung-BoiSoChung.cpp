#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b)
{
    while(b != 0)
    {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    while(t--)
    {
        ll a, b;    cin >> a >> b;
        cout << a/gcd(a,b) * b << " " << gcd(a,b) << endl;
    }   
    return 0;
}