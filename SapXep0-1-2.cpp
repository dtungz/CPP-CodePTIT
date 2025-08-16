#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;  cin >> n;
    int a[n];
    for(int &it : a) cin >> it;
    sort(a, a + n);
    for(auto &it : a)
        cout << it << " ";
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