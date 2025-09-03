#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    while(b)
    {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void solve()
{
    ll n, m;    cin >> n >> m;
    ll s = n * (n + 1) / 2;
    if(s < m)
    {
        cout << "No\n";
       // return;
    }
    else
    {
        if((s + m) % 2 != 0)
        {
            cout << "No\n";
            //return
        }
        else
        {
            ll x = (s + m) / 2;
            ll g = gcd(x, s);
            if(g == 1)
                cout << "Yes\n";
            else cout << "No\n";
        }
    }
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

//Có a + b = S (S là tổng tất cả các phần tử)
//  |a - b| = m
//  => (S + m) / 2 == x (x = max(n, m)) -> (S + m) % 2 == 0
// Từ x và S ta có gcd(a, b) = gcd(x, S) vì gcd(a, b) = gcd(a, a + b) = gcd(a, S)

