#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll binary(ll a[], ll n, ll val)
{
    ll l = 0, r = n - 1;
    while(l < r)
    {
        ll mid = (l + r)/2;
        if(a[mid] == val)
            return mid;
        else if(a[mid] < val)
            l = mid + 1;
        else r = mid;
    }
    return -1;
}

void solve()
{
    ll n;   cin >> n;
    unordered_set<int> st;
    for(int i = 1; i<= n; i++)
    {
        int tmp;    cin >> tmp;
        st.insert(tmp);
    }
    int i = 1;
    while(1)
    {
        if(!st.count(i))
        {
            cout << i << endl;
            return;
        }
        i++;
    }
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