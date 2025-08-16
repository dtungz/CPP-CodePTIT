#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;   cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i< n ; i++)
        cin >> v[i];
    int cnt = 0;
    for(int i = 0; i< n; i++)
        for(int j = i + 1; j < n; j++)
            if(v[i] + v[j] == k)
                cnt++;
    cout << cnt << endl;


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