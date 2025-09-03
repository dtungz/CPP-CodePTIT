#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n;	cin >> n;
	unordered_set<ll> visit;
	vector<ll> square(n);
	for(int i = 0; i < n ; i++)
	{
		ll tmp;	cin >> tmp;
		square[i] = tmp * tmp;
		visit.insert(square[i]);
	}
	sort(square.begin(), square.end());
	for(int i = 0; i < n - 1; i ++)
		for(int j = i + 1; j < n; j++)
		{
			if(visit.count(square[i] + square[j]))
			{
				cout << "YES\n";
				return;
			}
		}
	cout << "NO\n";
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