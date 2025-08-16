#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(int n)
{
    int dist = 0;
    for(int i = 2; i * i<= n ; i++)
    {
       if(n % i == 0)
       {
            dist++;
            int cnt = 0;
            while(n % i ==0)
            {
                cnt ++;
                n/=i;
                if(cnt > 1)
                    return 0;
            }
            if(dist > 3)
                return 0;
       }
    }
    if(n > 1)
        dist++;
    return dist == 3;
}

void solve()
{
    int n;  cin >> n;
    cout << check(n) << endl;
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