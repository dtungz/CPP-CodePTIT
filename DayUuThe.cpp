#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s, word ;   getline(cin,s);
    int odd = 0, even = 0, cnt = 0;
    stringstream ss(s);
    while(ss >> word)
    {
        if((word[word.size() - 1]) % 2 == 0)
            even++;
        else odd++;
        cnt++;
    }
     if ((cnt % 2 == 0 && even > odd) || (cnt % 2 == 1 && even < odd))
        cout << "YES\n";
    else
        cout << "NO\n";
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