#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll limit = 1e7 + 1;

vector<ll> primes;
ll len;
vector<bool> sieve(limit, true);
void ktao()
{
    sieve[0] = sieve[1] = false;
    for(ll i = 2; i*i <= limit; i++)
    {
        if(sieve[i])
        {
            for(ll j = i * i; j < limit; j += i)
            {
                sieve[j] = false;
            }
        }
    }
    for(ll i = 2; i < limit; i++)
    {
        if(sieve[i])
            primes.push_back(i);
    }
    len = primes.size();
}


void solve()
{
    ll n;  cin >> n;
    for(ll &it : primes)
    {
        if(it * it > n)
            break;
        if(n % it == 0)
        {
            ll cnt = 0;
            while(n % it == 0)
            {
                cnt++;
                n/=it;
            }
            cout << it << " " << cnt << "\n";
        }
    }
    if(n > 1)
        cout << n << " 1\n";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ktao();
    ll t;  cin>>t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}