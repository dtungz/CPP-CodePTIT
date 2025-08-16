#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, k;   cin >> n >> k;
        map<int, int> mp;
        for(int i = 1; i <= n; i++)
        {
            int tmp;    cin >> tmp;
            mp[tmp]++;
        }
        if(!mp.count(k))
            cout << - 1;
        else    cout << mp[k];
        cout << endl;
    }
}
