#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int val = 'z' - 'a' + 1;

void solve()
{
    string s;   cin >> s;
    int n;   cin >> n;
    map<char,int> mp;
    for(char &it : s)
        mp[it] = 1;
    if(val - mp.size() <= n)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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