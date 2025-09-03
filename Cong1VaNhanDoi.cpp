#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int cnt = 0;
	int val = 0;
	int n;	cin >> n;
	for(int i = 1; i<= n; i++)
	{
		int tmp;	cin >> tmp;
		int countDivisor = 0;
		while(tmp)
		{
			if(tmp % 2 == 1)
			{
				cnt++;
				tmp--;
			}
			else
			{
				countDivisor++;
				tmp/=2;
			}
			val = max(val, countDivisor);
		}
	}	
	int res = cnt + val;
	cout << res << endl;
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