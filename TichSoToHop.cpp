#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

const ll base = 1e9 + 7;
vector<vector<ll>> v(1001, vector<ll>(1001, 0));

void ktao()
{
	for(int i = 0; i < 1001; i++)
		v[i][0] = v[i][i] = 1;
	for(int i = 1; i < 1001; i++)
		for(int j = 1; j < i; j++)
			v[i][j] = (v[i-1][j] % base + v[i-1][j-1] % base) % base;
}
void solve()
{
	int n, r;
	cin >> n >> r;
	cout << v[n][r] << endl;
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ktao();
	int t;	cin >> t;
	while(t--)
		solve();
	return 0;
}