#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> sieve(ll n)
{
    vector<ll> ans;
    vector<ll> sang(n + 1, 0);
    for(int i = 2; i * i <= n + 1; i++)
    {
        if(sang[i] == 0)
            for(int j = i * i; j<= n; j += i)
                if(sang[j] == 0)
                    sang[j] = 1;
    }
    for(int i = 2; i <= n; i++)
        if(sang[i] == 0)
            ans.push_back(i);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    vector<ll> primes = sieve(100000);
    int t;  cin >> t;
    while(t--)
    {
        ll n, ans = 2;
        cin >> n;
        for(auto it : primes)
        {
            if(n % it == 0)
            {
                ans = it;
                while(n % it == 0)
                    n/=it;
            }
        }
        if(n > 1)
            ans = n;
        cout << ans << endl;
    }
    return 0;
}