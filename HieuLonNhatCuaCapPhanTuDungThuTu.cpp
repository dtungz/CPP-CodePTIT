#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i<= b; i++)
#define FOE(x, y) for(auto &x : y)

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int a[n];
        FOE(it,a)   cin >> it;
        int Left[n];
        int Right[n];
        Left[0] = a[0];
        FOR(i,1, n - 1)
            Left[i] = min(a[i], Left[i - 1]);
        Right[n-1] = a[n-1];
        for(int i = n - 2; i >= 0; i--)
            Right[i] = max(a[i], Right[i + 1]);
        int ans = 0;
        FOR(i, 0, n-1)
        {
            ans = max(ans, Right[i] - Left[i]);
        }
        if(ans == 0)
            cout << -1 << endl;
        else
        cout << ans << endl;
    }
}
