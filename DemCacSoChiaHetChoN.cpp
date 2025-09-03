#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

string sum(string a, string b)
{
	int len = max(a.size(), b.size());
	while(a.size() < len)
		a = "0" + a;
	while(b.size() < len)
		b = "0" + b;
	string res = "";
	int ok = 0;
	for(int i = len - 1; i >= 0; i--)
	{
		int x = a[i] - '0';
		int y = b[i] - '0';
		int temp = x + y + ok;
		res = to_string(temp % 10) + res;
		ok = temp / 10;
	}
	if(ok)
		res = "1" + res;
	return res;
}

void solve()
{
	int len, n;
	string s;	cin >> len >> n >> s;
	string dp[105][105];
	FOR(i, 0, 104) FOR(j, 0, 104) dp[i][j] = "0";
	dp[0][(s[0] - '0') % n] = "1";
	for(int i = 1; i < len ; i++)
	{
		int d = s[i] - '0';
		dp[i][d % n] = sum(dp[i][d % n], "1");
		for(int r = 0; r < n; r++)
		{
			if(dp[i - 1][r] != "0")
			{
				//TH 1 : Không lấy
				dp[i][r] = sum(dp[i][r], dp[i-1][r]);
				//TH 2 : Lấy
				int newString = (r * 10 + d) % n;
				dp[i][newString] = sum(dp[i][newString], dp[i - 1][r]); 
			}
		}
	}
	cout << dp[len - 1][0] << "\n";
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