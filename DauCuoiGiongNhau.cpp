#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;   cin >> s;
    map<char, int> mp;
    int res = s.size();
    for(auto &it : s)
        mp[it]++;
    for(auto [kitu, freq] : mp)
    {
        if(freq > 1)
            res += (freq * (freq - 1)/ 2);
    }
    cout << res << endl;
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