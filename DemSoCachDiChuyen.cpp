#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int n, k, ans;
int a[205][205];

void Try(int i, int j, int sum)
{
	sum += a[i][j];
	if(i == n && j == n && sum == k)
	{
		ans ++;
		return;
	}
	if(sum > k)
		return;
	if(i < n)
		Try(i + 1, j, sum);
	if(j < n)
		Try(i, j + 1, sum);
}

void solve()
{
	ans = 0;
	cin >> n >> k;
	memset(a, 0, sizeof(a));
	FOR(i, 1, n) FOR(j, 1, n) cin >> a[i][j];
	Try(1, 1, 0);
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