#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;

vector<ll> base = {1, 1, 1, 0};

vector<ll> mul(vector<ll> a, vector<ll> b)
{
    vector<ll> ans(4);
    ans[0] = ((a[0] * b[0] % mod) + (a[1] * b[2]) % mod) % mod;
    ans[1] = ((a[0] * b[1] % mod) + (a[1] * b[3]) % mod) % mod;
    ans[2] = ((a[2] * b[0] % mod) + (a[3] * b[2]) % mod) % mod;
    ans[3] = ((a[2] * b[1] % mod) + (a[3] * b[3]) % mod) % mod;
    return ans;
}

vector<ll> powfi(vector<ll> a, int n)
{
    if(n == 1)
        return a;
    vector<ll> temp = powfi(a, n/2);
    vector<ll> ans = mul(temp, temp);
    if(n % 2 == 0)
        return ans;
    return mul(ans, a);
}

void solve()
{
    int n;  cin >> n;
    if(n <= 1)
    {
        cout << n << endl;
        return;
    }
    vector<ll> ans = powfi(base, n - 1);
    cout << ans[0] << endl;
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