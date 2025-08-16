#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;   cin >> s;
    int i = 0, n = s.size(); 
    while(i < n)
    {
        int cnt = 0, ok = 0;
        char tmp = s[i];
        while(s[i] == tmp)
        {
            cnt++;
            i++;
            ok = 1;
        }
        cout << tmp << cnt;
        if(ok) i--;
        i++;
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