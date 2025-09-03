#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(ll& it : a)


void solve()
{
	int n, m, p;	cin >> n >> m >> p;
	vector<ll> a(n), b(m), c(p);
	FOE(it, a) cin >> it;
	FOE(it, b) cin >> it;
	FOE(it, c) cin >> it;
	int l1 = 0, l2 = 0, l3 = 0;
	bool ok = true;
	while(l1 < n && l2 < m && l3 < p)
	{
		if(a[l1] == b[l2] && b[l2] == c[l3])
		{
			cout << a[l1] << " ";
			l1++; l2++; l3++;
			ok = false;
		}
		else if(min(a[l1], min(b[l2] , c[l3])) == a[l1])
			l1++;
		else if(min(a[l1], min(b[l2] , c[l3])) == b[l2])
			l2++;
		else if(min(a[l1], min(b[l2] , c[l3])) == c[l3])
			l3++;
	}
	if(ok)
		cout << -1;
	cout << endl;
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