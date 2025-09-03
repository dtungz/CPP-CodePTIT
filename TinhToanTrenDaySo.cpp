#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

const ll mod = 1e9 + 7;

ll gcd(ll a, ll b)
{
	if(a == 0 || b == 0)
		return a + b;
	while(b)
	{
		ll tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

ll powfi(ll a, ll b)
{
	if(b == 1)
		return a % mod;
	if(b == 0)
		return 1;
	if(b == 2)
	{
		return ((a % mod) * (a % mod)) % mod;
	}
	ll tmp = powfi(a, b/2);
	ll ans = ((tmp % mod) * (tmp % mod)) % mod;
	if(b % 2 == 0)
		return ans;
	return ((ans % mod) * (a % mod)) % mod;
}

void solve()
{
	ll n;	cin >> n;
	ll hx = 1, gx = 0;
	for(ll i = 1; i <= n; i++)
	{
		ll tmp;	cin >> tmp;
		hx = ((hx % mod) * (tmp % mod)) % mod;
		gx = gcd(gx, tmp);
	}
	//cout << hx << " " << gx;
	cout << powfi(hx, gx) << "\n";
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