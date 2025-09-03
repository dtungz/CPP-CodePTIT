#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int solve()
{
	int n, x;	cin >> n >> x;
	bool done = false;
	// memset(a, 0, sizeof(a));
	// memset(dp, 0, sizeof(dp));
	vector<int> a(n + 1); a[0] = 0;
	vector<int> dp(n + 1); dp[0] = 0;
	for(int i = 1; i <=n ; i++)
	{
		cin >> a[i];
		dp[i] = dp[i-1] + a[i];
		if(a[i] > x)
			done = true;
	}
	if(done)
		return 1;
	if(dp[n] <= x)
		return -1;
	for(int i = 2; i <= n; i++)
	{
		for(int j = i; j <= n; j++)
			if(dp[j] - dp[j - i] > x)
				return i;
	}
	return -1;
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;	cin >> t;
	while(t--)
		cout << solve() << endl;
	return 0;
}