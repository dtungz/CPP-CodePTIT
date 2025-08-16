#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll ma = 1e6;
vector<ll> prime;
vector<ll> temp(ma + 1, 0);
void ktao()
{
    for(int i = 2; i*i <= ma; i++)
        if(temp[i] == 0)
            for(int j = i * i; j <= ma; j+=i)
                temp[j] = 1;
    for(int i = 2; i<= ma; i++)
        if(temp[i] == 0)
            prime.push_back(i);
}

int main()
{
    ktao();
    int t;cin >> t;
    while(t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << upper_bound(prime.begin(), prime.end(), r) - lower_bound(prime.begin(), prime.end(), l);
        cout << endl;
    }
}
