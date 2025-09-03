#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n, m;	cin >> n >> m;
	int a[n + 1][m + 1];
	FOR(i, 0, n - 1)	FOR(j , 0, m - 1)	cin >> a[i][j];
	int limit = n * m;
	int cnt = 0;
	for(int i = 0; i < limit ; i++)
	{
		for(int j = i; j < m - i; j++)
		{
			cout << a[i][j] << " ";
			cnt++;
			if(cnt == limit)
			{
				cout << "\n";
				return;
			}
		}
		for(int j = i + 1; j < n - i; j++)
		{
			cout << a[j][m-i-1] << " ";
			cnt++;
			if(cnt == limit)
			{
				cout << "\n";
				return;
			}
		}
		for(int j = m - i - 2; j >= i; j--)
		{
			cout << a[n - i - 1][j] << " ";
			cnt++;
			if(cnt == limit)
			{
				cout << "\n";
				return;
			}
		}
		for(int j = n - i - 2; j > i; j--)
		{
			cout << a[j][i] << " ";
			cnt++;
			if(cnt == limit)
			{
				cout << "\n";
				return;
			}
		}
	}
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