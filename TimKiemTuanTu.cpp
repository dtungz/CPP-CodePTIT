#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, X;   cin >> n >> X;
        int ok = 0, ans = - 1;
        for(int i = 1; i <= n; i++)
        {
            int tmp;    cin >> tmp;
            if(ok) continue;
            if(tmp == X)
            {
                ok = 1;
                ans = i;
            }
        }
        cout << ans << endl;
    }
}
