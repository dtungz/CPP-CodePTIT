#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;
    while(ss >> word)
        cnt++;
    cout << cnt << endl;

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