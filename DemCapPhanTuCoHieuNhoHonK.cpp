#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n, k;	cin >> n >> k;
	int a[n];
	for(int& it : a)	cin >> it;
	sort(a, a + n, greater<int>());
	queue<int> q;
	ll ans = 0;
	for(int i = 0; i < n ; i++)
	{
		while(!q.empty() && q.front() - a[i] >= k)
			q.pop();
		ans += q.size();
		q.push(a[i]);
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