#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

char a[205][205];

bool check(int x, int y, int k)
{
	for(int i = x; i < x + k; i++)
		if(a[i][y] == 'O' || a[i][y + k - 1] == 'O')
			return false;
	for(int i = y; i < y + k; i++)
		if(a[x][i] == 'O' || a[x + k - 1][i] == 'O')
			return false;
	return	true;
}

void solve()
{
	int n;	cin >> n;
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n ; i++)
		for(int j = 0; j < n ; j++)
			cin >> a[i][j];
	for(int k = n; k >= 1; k--)
	{
		for(int i = 0; i <= n - k; i++)
		{
			for(int j = 0; j <= n - k; j++)
			{
				if(check(i, j, k))
				{
					cout << k << "\n";
					return;
				}
			}
		}
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