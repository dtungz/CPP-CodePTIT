#include <bits/stdc++.h>
using namespace std;
#define ll long long

unordered_set<ll> fib;
void ktao()
{
    fib.insert(0);
    fib.insert(1);
    ll a[93];
    a[0] = 0; a[1] = 1;
    for(int i = 2; i<= 92; i++)
    {
        a[i] = a[i-1] + a[i-2];
        fib.insert(a[i]); 
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ktao();
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        for(int i = 1; i<= n; i++)
        {
            ll tmp; cin >> tmp;
            if(fib.count(tmp))
                cout << tmp << " ";
        }
        cout << endl;
    }
}