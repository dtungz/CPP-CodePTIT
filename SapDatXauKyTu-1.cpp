#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	string s;	cin >> s;
	int ma = 0;
	map<char,int> mp;
	for(auto it : s)
	{
		mp[it]++;
		ma = max(ma, mp[it]);
	}
	if(ma - 1<= s.size() - ma)	cout << "1\n";
	else cout << 0 << "\n";

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