#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

bool isThuanNghich(string s)
{
	if(s.size() == 1)
		return false;
	int l = 0, r = s.size() - 1;
	while(l <= r)
	{
		if(s[l] != s[r])
			return false;
		l++; r--;
	}
	return true;
}

bool cmp(pair<string,int> a, pair<string, int> b)
{
	string x = a.first;
	string y = b.first;
	if(x.size() != y.size())
		return x.size() > y.size();
	return x > y;
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	map<string, int> mp;
	string s;
	while(cin >> s)
	{
		if(isThuanNghich(s))
			mp[s]++;
	}	
	vector<pair<string, int>> ans(mp.begin(), mp.end());
	sort(ans.begin(), ans.end(), cmp);
	for(auto [num, freq] : ans)
		cout << num << " " << freq << endl;
	
	return 0;
}