#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n;   cin >> n;
        ll a[n];
        for(ll &it : a)
            cin >> it;
        int ans = a[0] + a[n-1];
        for(int i = 0; i< n -1 ; i++)
        {
            for(int j = i + 1; j < n ; j++)
            {
                int tmp = a[i] + a[j];
                if(abs(tmp) < abs(ans))
                    ans = tmp;
            }
        }
        cout << ans << endl;

    }
}