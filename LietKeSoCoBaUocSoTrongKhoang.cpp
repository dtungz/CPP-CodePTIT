#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll limit = 1e6 + 1;
vector<ll> primes;
void ktao()
{
    vector<bool> sieve(limit, true);
    sieve[0] = sieve[1] = false;
    for(ll i = 2; i*i <= limit; i++)
    {
        if(sieve[i] == true)
            for(ll j = i * i; j < limit; j+=i )
                sieve[j] = false;
    }
    for(ll i = 2; i < limit; i++)
        if(sieve[i])    primes.push_back(i);
}
void solve()
{
    ll l , r;   cin >> l >> r;
    ll st = sqrt(l), en = sqrt(r);
    if(st * st != l) st++;
    ll a = lower_bound(primes.begin(), primes.end(), st) - primes.begin();
    ll b = upper_bound(primes.begin(), primes.end(), en) - primes.begin();
    //cout << a << " " << b << endl;
    cout << b - a << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ktao();
    ll t;  cin>>t;
    while(t--)
        solve();
    return 0;
}