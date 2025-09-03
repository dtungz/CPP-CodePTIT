#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int ans[205][205];

signed main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	memset(ans, 0, sizeof(ans));
	int n;	cin >> n;
	int len = n * n;
	vector<int> temp(len, 0);
	FOE(it, temp)	cin >> it;
	int cnt = 0;
	sort(temp.begin(), temp.end());
	for(int i = 0; i< n && cnt < len ; i++)
	{
		for(int j= i; j < n - i && cnt < len; j++)
			ans[i][j] = temp[cnt++];
		for(int j = i + 1; j < n - i && cnt < len; j++)
			ans[j][n-i-1] = temp[cnt++];
		for(int j = n - i - 2; j >= i && cnt < len; j--)
			ans[n-i-1][j] = temp[cnt++];
		for(int j = n - i - 2; j > i && cnt < len; j--)
			ans[j][i] = temp[cnt++];
	}
	FOR(i, 0, n-1)
	{
		FOR(j, 0, n-1)
			cout << ans[i][j] << " ";
		cout << "\n"; 
	}
	return 0;
}