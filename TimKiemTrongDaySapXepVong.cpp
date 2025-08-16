#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,  X;  cin >> n >> X;
        int ans = 0;
        for(int i = 1; i <= n ; i++)
        {
            int tmp;    cin >> tmp;
            if(tmp == X)
                ans = i;
        }
        cout << ans << endl;
    }
}
