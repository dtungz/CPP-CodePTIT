#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n, m;	cin >> n >> m;
	vector<vector<int>> v(n, vector<int> (m, 0));
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m ; j++)
			cin >> v[i][j];
	string res = "";
	int len = n * m;
	for(int i = 0; i < n && len; i++)
	{
		for(int j = i; j < m - i - 1 && len; j++)
		{
			res = to_string(v[i][j]) + " " + res;
			len--;
		}
		for(int j = i ; j < n - i && len; j++)
		{
			res = to_string(v[j][m-i-1]) + " " + res;
			len--;
		}
		for(int j = m - i - 2; j >= i && len; j--)
		{
			res = to_string(v[n - i - 1][j]) + " " + res;
			len--;
		}
		for(int j = n - i - 2; j>i && len; j--)
		{
			res = to_string(v[j][i]) + " " + res;
			len--;
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