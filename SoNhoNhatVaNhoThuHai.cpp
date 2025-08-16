#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        ll a[n];
        ll fi = 1e7 + 1, se = 1e7 + 1;
        for(int i = 0; i< n ; i++)
        {
            cin >> a[i];
            if(a[i] < fi)
                fi = a[i];
        }
        for(int i = 0; i< n ; i++)
        {
            if(a[i] > fi && a[i] < se)
                se = a[i];
        }
        if(se == 1e7 + 1)
            cout << -1;
        else cout << fi << " " << se;
        cout << endl;
    }
}