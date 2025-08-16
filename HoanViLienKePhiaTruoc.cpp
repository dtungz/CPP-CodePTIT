#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int& it : a)    cin >> it;
    int i = n - 2;
    while(i >= 0 && a[i] <= a[i + 1])
        i--;
    if(i == -1)
        reverse(a.begin(), a.end());
    else
        {int j = n - 1;
    while(j > i && a[j] >= a[i])
        j--;
    swap(a[i], a[j]);
    reverse(a.begin() + i + 1, a.end());}
    for(auto it : a)
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