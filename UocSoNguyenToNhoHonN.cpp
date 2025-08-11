#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> primes;
const int limit = 1e4 + 1;

vector<int> sieve()
{
    vector<int> ans;
    vector<int> sang(limit, 0);
    for(int i = 2; i*i <= limit; i++)
        if(sang[i] == 0)
            for(int j = i *i; j< limit; j+=i)
                sang[j] = 1;
    for(int i = 2; i < limit; i++)
        if(sang[i] == 0)
            ans.push_back(i);
    return ans;
}

void solve()
{
    int n;  cin >> n;
    for(auto it : primes)
    {
        if(it > n)
            break;
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    primes = sieve();
    int t;  cin >> t;
    while(t--)
        solve();
    return 0;
}