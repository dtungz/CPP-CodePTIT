#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	string x, y;
	cin >> x >> y;
	int len = max(x.size(), y.size());
	while(x.size() < len)
		x = "0" + x;
	while(y.size() < len)
		y = "0" + y;
	if(y > x)
		swap(x, y);
	int ans[len] = {0};
	int ok = 0;
	for(int i = len - 1; i >= 0; i--)
	{
		int a = x[i] - '0';
		int b = y[i] - '0';
		int tmp = a - b - ok;
		if(tmp < 0)
		{
			ok = 1;
			tmp += 10;
		}
		else ok = 0;
		ans[i] = tmp;
	}
	for(auto it : ans)
		cout << it;
	cout << endl;
	//cout << x << " " << y << endl;
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