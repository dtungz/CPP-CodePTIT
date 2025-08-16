#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n,  m;  cin >> n >> m;
    vector<int> a(n), b(m);
    for(int &it : a)    cin >> it;
    for(int &it : b)    cin >> it;
    vector<int> ans;
    int l1 = 0, l2 = 0;
    while(l1 < n && l2 < m)
    {
        if(a[l1] == b[l2])
        {
            cout << a[l1] << " ";
            ans.push_back(a[l1]);
            l1++;   l2++;
        }
        else if(a[l1] < b[l2])
        {
            cout << a[l1] << " ";
            l1++;
        }
        else
        {
            cout << b[l2] << " ";
            l2++;
        }
    }
    while(l1 < n)
    {
        cout << a[l1] << " ";
        l1++;
    }
    while(l2 < m)
    {
        cout << b[l2] << " ";
        l2++;
    }
    cout << endl;
    for(int it : ans)
        cout << it << " ";
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