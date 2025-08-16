#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int a[21];

void in()
{
    for(int i = 1; i<= n; i++)
        cout << a[i];
    cout << " ";
}


void Try(int pos)
{
    for(int i = 0; i<= 1; i++)
    {
        a[pos] = i;
        if(pos == n)
            in();
        else
            Try(pos + 1);
    }
}

void solve()
{
    memset(a, 0, sizeof(a));
    cin >> n;
    Try(1);
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