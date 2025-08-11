#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool CanBang(ll n)
{
    ll odd = 0, even = 0;
    while(n)
    {
        int temp = n % 10;
        if(temp % 2 == 0)
            even++;
        else odd++;
        n/=10;
    }
    return odd == even;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;   cin >> n;
    int count = 0;
    ll sta = pow(10, n-1), end = pow(10, n);
    for(ll i = sta; i <= end; i++)
        if(CanBang(i))
        {
            cout << i << " ";
            count++;
            if(count % 10 == 0)
                cout << endl;
        }
}