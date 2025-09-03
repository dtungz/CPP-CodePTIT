#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


ll solve(vector<ll> v, int n)
{
	vector<ll> ans(n);
	ans[n - 1] = 0;
	FOL(i, n - 2, 0)
	{
		if(v[i] == 0)
			ans[i] = 1000000;
		else if(v[i] >= n - i - 1) // 1 4 2 2 2 2 4 (n = 7, i = 4 ,a[i] = 2 -> ans[i] = 1)
			ans[i] = 1;
		else
		{
			ll minStep = 1000000;
			for(int j = i + 1; j < n && j <= i + v[i]; j++ ) // i = 3, v[i] = 2
				minStep = min(minStep, ans[j]);
			ans[i] = minStep + 1;
		}
	}
	return ans[0];
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		vector<ll> v(n);
		for(ll &it : v)	cin >> it;
			cout << solve(v, n) << endl;
	}
	return 0;
}