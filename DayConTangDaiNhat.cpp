#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)
//Dãy con tăng dài nhất LIS : bài toán điển hình của đệ quy

void solve()
{
	int n, ans = 1;	cin >> n;
	vector<int> lis(n);
	vector<int> dp(n, 1);
	for(int i = 0; i < n ;i++)
	{
		cin >> lis[i];
		for(int j = 0; j < i; j++)
		{
			if(lis[i] > lis[j])
				dp[i] = max(dp[i], dp[j] + 1);
			ans = max(ans, dp[i]);
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