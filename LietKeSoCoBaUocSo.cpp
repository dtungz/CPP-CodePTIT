#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> ans;

vector<int> sieve()
{
    vector<int> primes;
    vector<int> sang(1001, 0);
    for(int i = 2; i*i <= 1001; i++)
    {
        if(sang[i] == 0)
            for(int j = i *i; j<= 1000; j+=i)
                sang[j] = 1;
    }
    for(int i = 2; i<= 1000; i++)
        if(sang[i] == 0)
            primes.push_back(i*i);
    return primes;
}

void solve()
{
    int n;  cin >> n;
    for(auto it : ans)
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
    int t;  cin>>t;
    ans = sieve();
    while(t--)
        solve();
    return 0;
}