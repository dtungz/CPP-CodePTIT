#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b) {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}


int main()
{
    //ktao();
    int t;cin >> t;
    while(t--)
    {
        ll x, y, z, n;
        cin >> x >> y >> z >> n;
        ll num = lcm(x, lcm(y, z));
        ll len = to_string(num).size();
        if(len == n)
        {
            cout << num << endl;
            continue;
        }
        else if(len > n)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            ll temp = pow(10, n - 1);
            ll ans = (temp + num - 1) / num * num;
            if(ans >= pow(10, n))
                cout << -1 << endl;
            else cout << ans << endl;
        }
    }
}