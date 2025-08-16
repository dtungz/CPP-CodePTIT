#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f[93];
void ktao()
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i<= 92; i++)
        f[i] = f[i-1] + f[i-2];
}

int main()
{
    ktao();
    int t;cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int i = 0;
        while(f[i] < n)
            i++;
        if(f[i] == n)
            cout << "YES\n";
        else cout << "NO\n";
    }
}
