#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    char c; cin >> c;
    if(isupper(c))
        c = tolower(c);
    else c = toupper(c);
    cout << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin>>t;
    //cin.ignore();
    while(t--)
        solve();
    return 0;
}