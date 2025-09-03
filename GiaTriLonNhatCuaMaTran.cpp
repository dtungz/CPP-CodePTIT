#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

const int MAXN = 405;
int a[MAXN][MAXN];
int mainDiag[2*MAXN][MAXN] = {0};
int antiDiag[2*MAXN][MAXN] = {0};


int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;	cin >> n;
	FOR(i, 1, n)	FOR(j, 1, n)	cin >> a[i][j];

	FOR(i, 1, n)
		FOR(j, 1, n)
		{
			int d1 = i - j + n;
			int d2 = i + j;
			mainDiag[d1][i] = mainDiag[d1][i-1] + a[i][j];
			antiDiag[d2][i] = antiDiag[d2][i-1] + a[i][j];
		}
	ll ans = -1e18;
	FOR(i, 1, n)
		FOR(j, 1, n)
		{
			int maxLen = min(n - i + 1, n - j + 1);
			FOR(k, 1, maxLen)
			{
				int i1 = i + k - 1, j1 = j + k - 1;
				int d1 = i - j + n;
				ll sumMain = mainDiag[d1][i1] - mainDiag[d1][i - 1];
				int d2 = i + j1;
				ll sumAnti = antiDiag[d2][i1] - antiDiag[d2][i - 1];

				ans = max(ans, sumMain - sumAnti);
			}
		}
	cout << ans << endl;
	return 0;
}