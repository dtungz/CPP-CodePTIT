#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;   cin >> s;
    int n = s.size();
    map<char, int> mp;
    for(char &it : s)
        mp[it]++;
    for(char &it : s)
    {
        if(mp[it] == 1)
            cout << it;
    }
    cout << endl;
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