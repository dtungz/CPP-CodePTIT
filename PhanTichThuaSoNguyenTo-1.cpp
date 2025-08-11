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
        ll n;   cin >> n;
        for(int i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                int cnt = 0;
                while(n%i==0)
                {
                    n/=i;
                    cnt++;
                }
                cout << i << " " << cnt << " ";
            }
        }
        if(n > 1)
            cout << n << " " << 1;
        cout << endl;
    }   
}