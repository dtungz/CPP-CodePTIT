#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int isLucky(int n)
{
	if(n == 9)
		return 1;
	else if(n < 10)
		return 0;
	else
	{
		int sum = 0;
		while(n)
		{
			sum += n%10;
			n/=10;
		}
		return isLucky(sum);
	}
}

void solve()
{
	string s;	cin >> s;
	int sum = 0;
	for(char it : s)
		sum += it - '0';
	cout << isLucky(sum) << "\n";
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