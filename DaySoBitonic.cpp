#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n;	cin >> n;
	vector<int> a(n), lis(n, 1), lds(n, 1);
	for(int i = 0; i < n ; i++)
	{
		cin >> a[i];	
		for(int j = 0; j < i; j++)
			if(a[i] > a[j])
				lis[i] = max(lis[i], lis[j] + 1);
	}
	for(int i = n - 2; i >= 0; i--)
		for(int j = n - 1; j > i; j--)
			if(a[i] > a[j])
				lds[i] = max(lds[i], lds[j] + 1);
	int ans = 0;
	for(int i = 0; i < n ; i++)
		ans = max(ans, lds[i] + lis[i] - 1);
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