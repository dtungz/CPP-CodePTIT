#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a[10] = {0};
    int n;  cin >> n;
    for(int i = 1; i<= n; i++)
    {
        int tmp;    cin >> tmp;
        while(tmp)
        {
            a[tmp % 10] = 1;
            tmp/=10;
        }
    }
    for(int i = 0; i<= 9; i++)
        if(a[i] == 1)
            cout << i << " ";
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