#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)
#define fi first
#define se second

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;	cin >> n;
	vector<pair<int, string>> v(n);
	int cnt = 0;
	FOR(i, 0, n-1)
	{
		cin >> v[i].se;
		v[i].fi = v[i].se.size();
	}
	sort(v.rbegin(), v.rend());
	FOR(i, 0, n-2)
	{
		FOR(j, i + 1, n -1)
		{
			if(v[i].se == v[j].se)
				cnt += 2;
			else
				if(v[i].se.find(v[j].se) != string :: npos)
					cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}