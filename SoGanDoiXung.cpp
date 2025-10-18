#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s)
{
    int cnt = 0;
    int l = 0, r = s.size() - 1;
    while(l <= r)
    {
        if(s[l] != s[r])
        {
            cnt++;
            if(cnt > 1)
                return false;
        }
        l++; r--;
    }
    return true;
}

void solve()
{
    int a, b;   cin >> a >> b;
    int count = 0;
    for(int i = a; i <= b; i++)
        if(check(to_string(i)))
            count++;
    cout << count << endl;
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