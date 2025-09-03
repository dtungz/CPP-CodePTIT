#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5 + 1;

vector<int> sang(limit, 0);
void ktao()
{
    sang[0] = 0;
    sang[1] = 1;
    for(int i = 2; i *i <= limit ; i++)
    {
        if(sang[i] == 0)
        {
            for(int j = i * i; j < limit; j+=i)
                if(sang[j] == 0)
                    sang[j] =  i;
        }
    }
    for(int i = 2; i < limit; i++)
        if(sang[i] == 0)
            sang[i] = i;
}

int sum(int n)
{
    int res = 0;
    while(n)
    {
        res += n%10;
        n/=10;
    }
    return res;
}

int check(int n)
{
    if(n == sang[n])
        return 0;
    int cnt = 0;
    while(n != 1)
    {
        cnt += sum(sang[n]);
        n /= sang[n];
    }
    return cnt;
}

void solve()
{
    int n;  cin >> n;
    if(check(n) == sum(n))
        cout << "YES";
    else cout <<"NO";
    cout  << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin>>t;
    ktao();
    while(t--)
        solve();
    return 0;
}