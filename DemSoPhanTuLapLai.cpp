#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    map<int, int> mp;
    int n;  cin >> n;
    int cnt = 0;
    for(int i = 0; i< n; i++)
    {
        int tmp;    cin >> tmp;
        mp[tmp]++;
    }
    for(auto it : mp)
        if(it.second > 1)  cnt += it.second;
    cout << cnt << endl;
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