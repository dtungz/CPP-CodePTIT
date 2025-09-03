#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	string s;
	ll ans = 0, m;
	cin >> s >> m;
	int len = s.size();
	for(int i = 0; i < len ; i++)
	{
		ans = ans * 10 + s[i] - '0';
		ans = ans % m;
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