#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int a[505][505];
int b[505][505];
int n,	m;

void nhap()
{
	FOR(i, 1, n) FOR(j, 1, m)	cin >> a[i][j];
}


int solve()
{
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	cin >> n >> m;
	nhap();
	
	FOR(i, 1, n) b[i][1] = a[i][1];
	FOR(i, 1, m) b[1][i] = a[1][i];
	int res = 0;
	FOR(i, 2, n)
		FOR(j, 2, m)
		{
			if(a[i][j] != 0)
			{
				b[i][j] = min(b[i][j-1], min(b[i-1][j], b[i-1][j-1])) + 1;
				res = max(res, b[i][j]);
			}
			else 
				b[i][j] = 0;
		}

	return res;
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;	cin >> t;
	while(t--)
		cout << solve() << endl;
	return 0;
}