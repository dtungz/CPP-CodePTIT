#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a, b;   cin >> a >>b;
    vector<int> v(a * a);
    for(int& it : v)    cin >> it;
    sort(v.begin(), v.end());
    cout << v[b - 1] << endl;
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