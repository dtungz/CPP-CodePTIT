#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int &it : v)    cin >> it;
        sort(v.rbegin(), v.rend());
        for(int i = 0; i < k; i++)
            cout << v[i] << " ";
        cout << endl;
    }
}