#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

ll M;

ll multi(ll a, ll b)
{
	if(b == 1)
		return a % M;
	if(b == 0)
		return 0;
	ll temp = multi(a, b/2);
	ll ans = (temp % M + temp % M) % M;
	if(b % 2 == 0)
		return ans;
	return (ans % M + a % M) % M;
}

ll powfi(ll a, ll b)
{
	if(b == 1)
		return a % M;
	if(b == 0)
		return 1;
	ll temp = powfi(a, b/2);
	ll ans = multi(temp, temp);
	if(b % 2 == 0)
		return ans;
	return multi(ans, a);
}

void solve()
{
	string a;
	ll b;
	cin >> a >> b >> M;
	int len = a.size();
	ll temp = 0;
	for(int i = 0; i < len ; i++)
	{
		temp = temp * 10 + a[i] - '0';
		temp = temp % M;
	}
	cout << powfi(temp, b) << "\n";
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