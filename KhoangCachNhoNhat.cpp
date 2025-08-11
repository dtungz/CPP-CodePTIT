#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int ans = INT_MAX;
        int a[n];
        for(int &it : a)
            cin >> it;
        sort(a, a + n);
        for(int i = 1; i< n; i++)
            ans = min(ans, a[i] - a[i-1]);
        cout << ans << endl;
    }
    return 0;
}