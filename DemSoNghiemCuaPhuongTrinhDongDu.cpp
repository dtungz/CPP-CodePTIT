#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll process(ll limit, ll div)
{
    ll res = 0;
    for(ll i = 1; i < div; i++)
    {
        if((i * i) % div == 1)
        {
            ll maxVal = i + div * (limit / div);
            if(maxVal > limit)
                maxVal -= div;
            res += (maxVal - i) / div + 1;
        } 
    }
    return res;
}

void solve()
{
    ll a, b;    cin >> a >> b;
    cout << process(a, b) << "\n"; 
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