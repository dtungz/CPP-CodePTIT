#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> primes;
void ktao()
{
    vector<ll> temp(1000001, 0);
    for(int i = 2; i*i <= 1000000; i++)
        if(temp[i] == 0)
        {
            for(int j = i *i ; j <= 1000000; j+=i)
                temp[j] = 1;
        }
    for(int i = 2; i < 1000001; i++)
        if(temp[i] == 0)
            primes.push_back(i);
}

int main()
{
    ktao();
    int t;cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll en = sqrt(n);
        int cnt = 0;
        cnt = upper_bound(primes.begin(), primes.end(), en) - primes.begin();
        cout << cnt << endl;
    }
}
