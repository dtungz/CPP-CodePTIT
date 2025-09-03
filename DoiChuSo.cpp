#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	string s;	cin >> s;
	int len = s.size();
	bool ok = false;
	for(int i = len - 2; i > 0; i--)
	{
		if(s[i] > s[i + 1])
		{
			ok = true;
			char sum = 0;int key = i + 1;
			for(int j = i + 1; j < len; j++)
			{
				if(s[j] < s[i])
					if(s[j] > sum)
					{
						sum = s[j];
						key = j;
					}
			}
			swap(s[i], s[key]);
			cout << s << "\n";
			return;
		}
	}	
	cout << -1 << endl;
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