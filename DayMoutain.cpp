#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;  cin >> n;
    int a[n];
    for(int &it : a)
        cin >> it;
    int l , r;
    cin >> l >> r;
    bool isInc = true;
    for(int i = l + 1; i<= r; i++)
    {
        if(a[i] > a[i - 1] && !isInc)
        {
            cout << "No" << endl;
            return;
        }
        if(a[i] < a[i-1])
            isInc = false;
    }
    cout << "Yes" << endl;
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