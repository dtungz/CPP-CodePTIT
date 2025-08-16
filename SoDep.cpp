#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isBeu(string s)
{
    int l = 0, r = s.size() - 1;
    while(l < r)
    {
        if((s[l] - '0') % 2 == 1)
            return false;
        if(s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    if(isBeu(s))
        cout << "YES\n";
    else cout << "NO\n";
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