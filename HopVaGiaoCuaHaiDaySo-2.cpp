#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	unordered_set<int> a;
	set<int> ans1;
	set<int> ans2;
	int n, m;	cin >> n >> m;
	for(int i = 0; i < n ; i++)
	{
		int tmp;	cin >> tmp;
		ans1.insert(tmp);
		a.insert(tmp);
	}
	for(int i = 0; i < m ; i++)
	{
		int tmp;	cin >> tmp;
		ans1.insert(tmp);
		if(a.count(tmp))
			ans2.insert(tmp);
	}
	for(auto it : ans1)
		cout << it << " ";
	cout << endl;
	for(auto it : ans2)
		cout << it << " ";
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