#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll ma = 100000;
ll phi[ma + 1];
ll prime[ma + 1];
void ktao()
{
    for(int i = 0; i <= ma; i++)
        phi[i] = i;
    for(int i = 2; i<= ma; i++)
    {
        if(phi[i] == i)
            for(int j = i; j <= ma ; j+=i)
        {
            phi[j] -= phi[j]/i;
        }
    }
    //memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 1;
    for(int i = 2; i*i <= ma; i++)
        if(prime[i] == 0)
            for(int j = i *i ;j<= ma; j+=i)
                prime[j] = 1;
}

int main()
{
    ktao();
    int t;cin >> t;
    while(t--)
    {
        ll n;   cin >> n;
        ll t = phi[n];
        cout << 1 - prime[t] << endl;
    }
}
