#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	string s;	cin >> s;
	int ans = 0;
	int len = s.size();
	int i = 0, num = 0;
	while(i < len)
	{
		num = 0;
		int ok = 0;
		while(isdigit(s[i]))
		{
			num = num * 10 + s[i] - '0';
			i++;
		}
		ans = max(num, ans);
		i++;
		if(ok)
			i--;
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