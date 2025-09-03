#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

ll base[3][3];

ll sum(ll a[305][305],ll x, ll y)
{
	ll res = 0;
	FOR(i, 0, 2)
		FOR(j, 0, 2)
			res += a[x + i][y + j] * base[i][j];
	return res;
}

void solve()
{
	ll n, m;	cin >> n >> m;
	ll a[305][305];
	FOR(i,0,n-1)
		FOR(j,0,m-1)
			cin >> a[i][j];
	FOR(i,0,2)
		FOR(j, 0, 2)	cin >> base[i][j];
	ll ans = 0;
	FOR(i, 0, n - 3)
		FOR(j, 0, m - 3)
			ans += sum(a, i, j);
	cout << ans << "\n";
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