#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        map<int,int> mp;
        int a[n];
        int ans = 0;
        int ok = 0;
        for(int i = 0; i < n ; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            if(!ok && mp[a[i]] == 2)
            {
                ans = a[i];
                ok = 1;
            }
        }
        if(!ok) cout << -1;
        else cout << ans;
        cout << endl;

    }
}
