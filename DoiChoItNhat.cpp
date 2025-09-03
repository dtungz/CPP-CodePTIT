#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

void solve()
{
	int n;	cin >> n;
	pair<int, int> a[n];
	for(int i = 0; i < n ; i++)
	{
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a, a + n);
	vector<bool> visited(n, false);

	int ans = 0;

	for(int i = 0; i < n ; i++)
	{
		if(visited[i] || a[i].second == i)
			continue;
		int cycle = 0;
		int j = i;
		while(!visited[j])
		{
			visited[j] = true;
			j = a[j].second;
			cycle++;
		}
		if(cycle > 0)
			ans += (cycle - 1);
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