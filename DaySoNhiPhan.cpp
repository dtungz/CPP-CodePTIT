#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n;	cin >> n;
	int a[n + 1], b[n + 1];
	a[0] = b[0] = 0;
	FOR(i, 1, n)
	{
		cin >> a[i];
		a[i] = a[i-1] + a[i];
	}
	FOR(i, 1, n)
	{
		cin >> b[i];
		b[i] += b[i-1];
	}
	int ma = 0;
	FOR(i, 1, n)
	{
		FOR(j, i + ma, n)
		{
			if(a[j] - a[i-1] == b[j] - b[i - 1])
				if(j - i + 1 > ma) ma = j - i + 1;
		}
	}
	cout << ma << "\n";
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