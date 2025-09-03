#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

ll atMostK(const string& s, int k)
{
	ll len = s.size();
	unordered_map<char, int> mp;
	ll cur = 0, ans = 0, l = 0;
	for(int r = 0; r < len ; r++)
	{
		if(mp[s[r]] == 0)
			cur++;
		mp[s[r]]++;
		while(cur > k)
		{
			mp[s[l]]--;
			if(mp[s[l]] == 0)
				cur--;
			l++;
		}
		ans += r - l + 1;
	}
	return ans;
}

void solve()
{
	string s;
	int k;
	cin >> s >> k;
	int len = s.size();
	cout << atMostK(s, k) - atMostK(s, k - 1) << endl;
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