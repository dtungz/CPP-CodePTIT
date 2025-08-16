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
        ll a, x, y; cin >> a >> x >> y;
        ll temp = gcd(x, y);
        for(int i = 1; i<= temp; i++)
            cout << a;
        cout << endl;
    }
}
