#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)
ll dp[505][505];
ll L;

ll sum(ll a[505][505], ll x, ll y)
{
	ll res = 0;
	FOR(i, 0, L - 1)
		FOR(j, 0, L - 1)
			res += a[x + i][y + j];
	return res / (L * L);
}

ll sum(int i, int j)
{
	ll res = dp[i][j] - dp[i-L][j] - dp[i][j-L] + dp[i-L][j-L];
	return res / (L * L);
}

void solve()
{
	memset(dp, 0, sizeof(dp));
	ll n, m;	cin >> n >> m >> L;
	ll a[505][505] = {0};
	FOR(i, 1, n)
		FOR(j, 1, m)
		{
			cin >> a[i][j];
			dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + a[i][j];
		}
	FOR(i, L, n)
	{
		FOR(j, L, m)
			cout << sum(i, j) << " ";
		cout << endl;
	}
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;	cin >> t;
	while(t--)
		solve();
	return 0;
}