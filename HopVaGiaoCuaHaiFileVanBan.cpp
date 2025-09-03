#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    unordered_set<string> a;
    set<string> hop;
    set<string> giao;
    freopen("DATA1.in", "r", stdin);
    string s;
    while(cin >> s)
    {
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        a.insert(s);
        hop.insert(s);
    }
    cin.clear();
    cin.seekg(0);
    freopen("DATA2.in", "r", stdin);
    while(cin >> s)
    {
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        hop.insert(s);
        if(a.count(s))
            giao.insert(s);
    }
    for(string it : hop)
        cout << it << " ";
    cout << endl;
    for(string it : giao)
        cout << it << " ";
}