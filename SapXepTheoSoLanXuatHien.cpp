#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


bool cmp(pair<int,int> a, pair<int, int> b)
{
	if(a.second != b.second)
		return a.second > b.second;
	return a.first < b.first;
}

void solve()
{
	map<int, int> mp;
	int n;	cin >> n;
	for(int i = 0; i < n ; i++)	
	{
		int tmp;	cin >> tmp;
		mp[tmp]++;
	}
	vector<pair<int, int>> v(mp.begin(), mp.end());
	sort(v.begin(), v.end(), cmp);
	for(auto [cur, freq] : v)
	{
		for(int i = 0; i < freq; i++)
			cout << cur << " ";
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