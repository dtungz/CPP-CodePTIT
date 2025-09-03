#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n, m;	cin >> n >> m;
	int ans = 0;
	vector<vector<int>> a(n, vector<int>(m, 0));
	for(int i = 0; i< n ; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	vector<vector<int>> high(n, vector<int>(m, 0));
	for(int i = 0; i < m; i++)
		high[0][i] = a[0][i];
	for(int i = 1; i< n; i++)
		for(int j = 0;j < m ; j++)
		{
			if(a[i][j] == 1)
			{
				high[i][j] = high[i-1][j] + 1;
			}
		}
	for(int i = 0;i < n; i++)
	{
		vector<int> h = high[i];
		sort(h.begin(), h.end(), greater<int>());
		for(int j = 0; j < m; j++)
		{
			ans = max(ans, h[j] * (j + 1));
		}
	}
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