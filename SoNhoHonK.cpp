#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	ll n, k;
	cin >> n >> k;
	vector<ll> v(n);
	int a = 0, b= 0;
	for(ll i = 0; i  < n ; i++)
	{
		cin >> v[i];
		if(v[i] <= k)
			a++;
	}
	queue<ll> q;
	for(int i = 0;i < a; i++)
	{
		q.push(v[i]);
		if(v[i] > k)
			b++;
	}
	int ans = b;
	for(int i = a; i < n; i++)
	{
		if(q.front() > k)
			b--;
		if(v[i] > k)
			b++;
		q.push(v[i]);
		q.pop();
		ans = min(ans, b);
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