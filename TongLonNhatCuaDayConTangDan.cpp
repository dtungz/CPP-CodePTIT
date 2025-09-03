#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n;	cin >> n;
	vector<ll> a(n), b(n);
	for(int i = 0; i < n ; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}	
	ll ans = a[0];
	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(a[i] > a[j] && b[j] + a[i] > b[i])
				b[i] = b[j] + a[i];
		}
		ans = max(ans, b[i]);
	}
	cout << ans << endl;
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