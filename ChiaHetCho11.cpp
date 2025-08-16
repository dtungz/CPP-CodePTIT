#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(string s)
{
    int n = s.size();
    int odd = 0, even = 0;
    for(int i = 0; i< n; i++)
    {
        if(i % 2 == 0)
            even += s[i] -'0';
        else odd += s[i] -'0';
    }
    return abs(odd - even) % 11 == 0;
}

void solve()
{
    string s;   cin >> s;
    cout << check(s) << endl;
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