#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n, m, k;	cin >> n >> m >> k;
	vector<vector<int>> v(n, vector<int> (m, 0));
	FOR(i, 0, n-1)	FOR(j, 0, m-1)	cin >> v[i][j];
	vector<int> ans = {0};
	int len = n * m;
	for(int i = 0; i < n && len ; i++)
	{
		for(int j = i; j < m - i && len; j++, len--)
			ans.push_back(v[i][j]);
		for(int j = i + 1; j < n - i && len; j++, len--)
			ans.push_back(v[j][m - i - 1]);
		for(int j = m - i - 2; j >= i && len; j--, len--)
			ans.push_back(v[n-i-1][j]);
		for(int j = n - i - 2; j > i && len; j--, len--)
			ans.push_back(v[j][i]);
	}
	// for(int i = 1; i <= n * m; i++)
	// 	cout << ans[i] << " ";
	// cout << endl;
	cout << ans[k] << "\n";
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