#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n;	cin >> n;
	int ma = 0;
	int dx[n + 1], dy[n + 1], a[n + 1][n + 1];
	FOR(i, 1, n)
	{
		int sum = 0;
		FOR(j, 1, n)
		{
			cin >> a[i][j];
			sum += a[i][j];
		}
		ma = max(ma, sum);
		dy[i] = sum;
	}
	FOR(i, 1, n)
	{
		int sum = 0;
		FOR(j, 1, n)
			sum += a[j][i];
		dx[i] = sum;
		ma = max(ma, sum);
	}
	int ans = 0;
	FOR(i, 1, n)
		ans += ma - dx[i];
	cout << ans << endl;

}

signed main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;	cin >> t;
	while(t--)
		solve();
	return 0;
}