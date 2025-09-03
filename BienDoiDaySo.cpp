#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n;	cin >> n;
	int a[n], l = 0, r = n - 1;
	memset(a, 0, sizeof(a));
	FOE(it, a)	cin >> it;
	int cnt = 0;
	int vt = a[l], vp = a[r];
	while(l < r)
	{
		
		if(vt == vp)
		{
			vt = a[++l];
			vp = a[--r];
		}
		else if(vt < vp)
		{
			vt += a[++l];
			cnt++;
		}
		else
		{
			vp += a[--r];
			cnt++;
		}
	}
	cout << cnt << endl;
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