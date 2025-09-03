#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n, m;	cin >> n >> m;
	int a[n][m];
	FOR(i, 0, n - 1)	FOR(j, 0, m - 1)	cin >> a[i][j];
	FOR(i, 1, n - 1)	FOR(j, 0, m - 1)	if(a[i][j] == 1) a[i][j] += a[i-1][j];
	int res = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n ; j++)
		{
			int minSq = a[i][j];
			for(int k = j; k >= 0; k--)
			{
				if(a[i][k] != 0)
				{
					if(minSq > a[i][k]) minSq = a[i][k];
					res = max(res, minSq * (j - k + 1));
				}
				else break;
			}
		}
	}
	cout << res << endl;
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