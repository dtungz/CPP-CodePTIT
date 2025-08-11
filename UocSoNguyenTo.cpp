#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> primes(ll limit)
{
    vector<ll> ans;
    vector<ll> sang(limit + 1, 0);
    for(int i = 2; i*i <= limit; i++)
    {
        if(sang[i] == 0)
            for(int j = i*i; j<= limit; j+=i)
                if(sang[j] == 0)
                    sang[j] = 1;
    }
    for(int i = 2; i<= limit; i++)
        if(sang[i] == 0)
            ans.push_back(i);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin>>t;
    //cout << "he llo";
    vector<ll> sieve = primes(100000);
    while(t--)
    {
        ll n;   cin >> n;
        for(auto it : sieve)
        {
            while(n % it == 0)
            {
                cout << it << " ";
                n = n/it;
            }
            if(it > n)
                break;
        }
        if(n > 1)   cout << n;
        cout << endl;
    }
    return 0;
}