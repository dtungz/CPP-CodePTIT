#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n, k;	cin >> n >> k;
	vector<pair<int, int>> v(n);
	FOR(i, 0, n-1)
	{
		cin >> v[i].first;
		v[i].second = i;
	}
	deque<pair<int, int>> dq;
	FOR(i, 0, k - 1)
	{
		while(!dq.empty() && dq.back() < v[i])
			dq.pop_back();
		dq.push_back(v[i]);
	}
	cout << dq.front().first << " ";
	for(int i = k; i < n ; i++)
	{
		while(dq.front().second <= i - k)
			dq.pop_front();
		while(!dq.empty() && dq.back() < v[i])
			dq.pop_back();
		dq.push_back(v[i]);
		cout << dq.front().first << ' ';
	}
	cout << endl;
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