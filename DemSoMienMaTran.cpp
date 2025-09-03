#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int dx[9] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[9] = {-1, -1, -1, 0, 0, 1, 1, 1};

void loang(int a[205][205],int  i,int  j)
{
	a[i][j] = 0;
	for(int k = 0; k < 9; k++)
	{
		int i1 = i + dy[k];
		int j1 = j + dx[k];
		if(a[i1][j1] == 1)
			loang(a, i1, j1);
	}
}

void solve()
{
	int n, m;	cin >> n >> m;
	int a[205][205] = {0};
	FOR(i, 1, n)	FOR(j, 1, m)	cin >> a[i][j];
	int cnt = 0;
	FOR(i, 1, n)	
		FOR(j, 1, m)
		{
			if(a[i][j] == 1)
			{
				cnt++;
				loang(a, i, j);
			}
		}
	cout << cnt << "\n";	
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