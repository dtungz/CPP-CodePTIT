#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	string s;
	unordered_map<char,int> mp;
	cin >> s;
	if(s[0] == '0')
	{
		cout << "INVALID\n";
		return;
	}
	int n = s.size();
	for(int i = 0; i < n ; i++)
	{
		if(!isdigit(s[i]))
		{
			cout << "INVALID\n";
			return;
		}
		mp[s[i]] = 1;
	}		
	if(mp.size() != 10)
		cout << "NO\n";
	else
		cout << "YES\n";
}

signed main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;	cin >> t;
	while(t--)
		solve();
	return 0;
}