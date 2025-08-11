#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;
    int len = s.size();
    for(int i = 0; i< len ; i++)
        if(s[i] != '0' && s[i] != '6' && s[i] != '8')
        {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";
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