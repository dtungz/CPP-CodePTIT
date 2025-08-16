#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n,	m;	cin >> n >> m;
	int a[n + 1][m + 1];
	int ans[n + 1][m + 1];
	FOR(i, 1, n)
		FOR(j, 1, m)
		{
			cin >> a[i][j];
			ans[i][j] = a[i][j];
		}
	
	int round = min(n, m);
	FOR(i, 1, round/2)
	{
		FOR(j, i + 1, m - i + 1)
			ans[i][j] = a[i][j - 1];
		FOR(j, i + 1, n- i +1 )
			ans[j][m - i + 1] = a[j-1][m-i+1];
		FOR(j, i, m - i)
			ans[n- i + 1][j] = a[n-i+1][j+1];
		FOR(j, i, n - i)
			ans[j][i] = a[j+1][i];
	}
	FOR(i, 1, n)
	{
		FOR(j, 1, m)
			cout << ans[i][j] << " ";
		//cout << "\n";
	}
	cout << endl;

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