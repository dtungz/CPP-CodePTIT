#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(string s)
{
    int n = s.size();
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum = (sum * 2 + (s[i] - '0')) % 5;
    return sum % 5 == 0;
}

void solve()
{
    string s;   cin >> s;
    if(check(s))
        cout << "Yes\n";
    else cout << "No\n";
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