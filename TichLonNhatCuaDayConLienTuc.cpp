#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n;	cin >> n;
	ll ans = -1e18;
	ll a[n];
	for(ll &it : a)	cin >> it;
	for(int i = 0; i < n ; i++)
	{
		ll temp = 1;
		for(int j = i; j < n; j++)
		{
			temp *= a[j];
			ans = max(ans , temp);
		}
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