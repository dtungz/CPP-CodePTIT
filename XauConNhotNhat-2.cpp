#include <bits/stdc++.h>
using namespace std;
#define ll long long

int res;

int countSize(string s, int idx, int leght)
{
    int len = s.size();
    unordered_set<char> st;
    for(int i = idx; i < len ; i++)
    {
        st.insert(s[i]);
        if(st.size() == leght)
            return i - idx + 1;
        if(i - idx + 1 > res)
            return res;
    }
    return res;
}

void solve()
{
    string s;    cin >> s;
    unordered_set<char> count;
    for(char &it : s) count.insert(it);
    int len = count.size();
    int n = s.size();
    res = n;
    for(int i = 0; i < n ; i++)
        res = min(res, countSize(s, i, len));
    cout << res << '\n';
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