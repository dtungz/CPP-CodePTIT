#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(string a, string b)
{
    string x = a + b;
    string y = b + a;
    if(x > y)   return 1;
    return 0;
}

void solve()
{
    int n;  cin >> n;
    string a[n];
    for(int i = 0; i < n ; i++)
        cin >> a[i];
    sort(a, a + n, cmp);
    for(int i = 0; i < n ; i++)
        cout << a[i];
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