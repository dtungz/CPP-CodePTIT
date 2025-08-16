#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

void solve()
{
	int n, ans = 0;	cin >> n;
	unordered_map<int, int> mp;
	for(int i = 0; i< n ; i++)
	{
		unordered_map<int, int> temp;
		for(int i =0 ; i< n ; i++)
		{
			int tmp;	cin >> tmp;
			temp[tmp]++;
			if(temp[tmp] == 1)	
			{
				mp[tmp]++;
				if(mp[tmp] == n)
					ans++;
			}
		}
	}
	cout << ans << endl;

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