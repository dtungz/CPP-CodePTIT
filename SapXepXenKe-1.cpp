#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;  cin >> n;
    vector<int> v(n);
    for(int &it : v)    cin >> it;
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    while(l <= r)
    {
        cout << v[r];
        if(l != r)  cout << " " << v[l] << " ";
        l++; r--;
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