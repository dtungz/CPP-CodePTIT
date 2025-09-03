#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("VANBAN.in", "r", stdin);
    set<string> st;
    string s;
    while(cin >> s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        st.insert(s);
    }   
    for(auto it : st)
        cout << it << "\n";
}