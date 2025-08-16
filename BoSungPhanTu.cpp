#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >>  n;
        map<int, int> mp;
        int mi = INT_MAX, ma = 0;
        for(int i = 0; i< n; i++)
        {
            int it;
            cin >> it;
            mp[it]++;
            ma = max(ma, it);
            mi = min(mi, it);
        }
        cout << (ma - mi + 1) - mp.size() << endl;
    }
    return 0;
}