#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s, word, ans = "";
    getline(cin, s);
    stringstream ss(s);
    while(ss >> word)
        ans = word + " " + ans;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin>>t;
    cin.ignore();
    while(t--)
        solve();
    return 0;
}