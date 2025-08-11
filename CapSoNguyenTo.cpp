#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n)
{
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

void solve()
{
    int n;  cin >> n;
    for(int i = 2; i <= n/2; i++)
    {
        if(isPrime(i) && isPrime(n-i))
        {
            cout << i << " " << n-i << endl;
            return;
        }
    }
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