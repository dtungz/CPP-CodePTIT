#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FOL(i, a, b) for(ll i = a; i >= b; i--)
#define FOE(it, a) for(ll& it : a)


void solve()
{
	ll n;	cin >> n;
	ll a[n], dp[n];
	ll ans = 0;
	for(ll i = 0 ;i < n; i ++)
		cin >> a[i];	
	dp[0] = a[0];
	dp[1] = max(a[0], a[1]);
	for(ll i = 2; i < n; i++)
	{
		dp[i] = max(dp[i-1], a[i] + dp[i-2]);
		ans = max(ans, dp[i]);
	}
	cout << ans << endl;
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll t;	cin >> t;
	while(t--)
		solve();
	return 0;
}