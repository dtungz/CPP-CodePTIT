#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FOL(i, a, b) for(ll i = a; i >= b; i--)
#define FOE(it, a) for(ll& it : a)


void solve()
{
	ll n, m;	cin >> n >> m;
	vector<vector<ll>> v(n,vector<ll>(m));
	FOR(i, 0, n-1) FOR(j, 0, m - 1) cin >> v[i][j];
	ll res = -1e18;
	for(ll i = 0; i < m; i++)
	{
		ll sum[10000] = {0};
		for(ll j = i; j < m; j++)
		{
			ll s = 0;
			for(ll k = 0; k < n; k++)
			{
				sum[k] += v[k][j];
				s = max(sum[k], sum[k] + s);
				res = max(res, s);
			}
		}
	} 	
	cout << res << endl;
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll t;	cin >> t;
	while(t--)
		solve();
	return 0;
}