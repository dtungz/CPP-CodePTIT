#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    while(t--)
    {

        int n, Case;
        cin >> n >> Case;
        int a[n + 1];
        a[0] = 0;
        for(int i = 1; i<= n; i++)
        {
            int tmp;    cin >> tmp;
            a[i] = a[i-1] + tmp;
        }
        for(int i = 1; i <= Case; i++)
        {
            int l, r;   cin >> l >> r;
            cout << a[r] - a[l-1] << endl;
        }       
    }
}