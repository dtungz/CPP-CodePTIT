#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n,	m;	cin >> n >> m;
	unordered_map<int,int> base;
	unordered_set<int> st;
	vector<int> a(n), b(m);
	for(int &it : a)
	{
		cin >> it;
		base[it]++;
	}
	for(int &it : b)	cin >> it;
	for(int i = 0; i < m ; i++)
	{
		while(base[b[i]])
		{
			cout << b[i] << " ";
			base[b[i]]--;
		}
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < n ; i++)
	{
		if(base[a[i]] > 0)
		{
			cout << a[i] << " ";
			base[a[i]]--;
		}
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