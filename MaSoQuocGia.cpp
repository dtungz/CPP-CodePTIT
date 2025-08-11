#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;   cin >> s;
    while(s.find("084") != string :: npos)
        s.erase(s.find("084"), 3);
    cout << s << endl;
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