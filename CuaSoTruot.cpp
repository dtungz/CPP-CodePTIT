#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int a[101][101] = {0};
int ans[101][101] = {0};
int x[101][101] = {0};
int n, m;

void nhap(int a[101][101], int n)
{
	FOR(i, 1, n)
		FOR(j, 1, n)
			cin >> a[i][j];
}

void mul(int i, int j)
{
	for(int i1 = 1; i1 <= m; i1++)
		for(int j1 = 1; j1<= m; j1++)
		{
			ans[i1 + i - 1][j1 + j - 1] = a[i1 + i - 1][j1 + j - 1] * x[i1][j1];
		}
}

signed main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n;
	nhap(a, n);
	cin >> m;
	nhap(x, m);
	for(int i = 1; i <= n; i+= m)
		for(int j = 1; j <= n; j+= m)
			mul(i, j);
	for(int i = 1; i<= n; i++)
	{
		for(int j = 1; j <= n; j++)
			cout << ans[i][j] << " ";
		cout << "\n";
	}
	return 0;
}