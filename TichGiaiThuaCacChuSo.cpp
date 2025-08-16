#include <bits/stdc++.h>
using namespace std;
#define ll long long

void add(vector<int>& v, int n)
{
    if(n == 4)
    {
        v[2] += 2;
        v[3]++;
    } 
    else if( n == 6)
    {
        v[5]++;
        v[3]++;
    }
    else if(n == 8)
    {
        v[2] += 3;
        v[7]++;
    }
    else if(n == 9)
    {
        v[7]++;
        v[3] += 2;
        v[2] ++;
    }
    else    v[n]++;
}

void solve()
{
    int n; string a;
    cin >> n >> a;
    vector<int> v(10, 0);
    for(int i = 0; i< n; i++)
    {
        int tmp = a[i] - '0';
        add(v, tmp);
    }
    for(int i = 9; i>= 2; i--)
    {
        while(v[i])
        {
            cout << i;
            v[i]--;
        }
    }
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