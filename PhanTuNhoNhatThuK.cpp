#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;  cin >> n >> k;
    int a[n];   for(int &it : a)    cin >> it;
    sort(a, a + n);
    cout << a[k-1] << endl;
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