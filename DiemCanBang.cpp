#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n;	cin >> n;
	vector<int> v(n + 1);
	v[0] = 0;
	for(int i = 1; i <= n ;i++)
	{
		cin >> v[i];
		v[i] += v[i-1];
	}
	for(int i = 1; i <= n; i++)
	{
		if(v[i-1] == v[n] - v[i])
		{
			cout << i << "\n";
			return;
		}
	}
	cout << -1;
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