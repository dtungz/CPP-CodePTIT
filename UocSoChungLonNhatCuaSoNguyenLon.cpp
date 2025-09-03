#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

ll du(string s, ll mod)
{
	ll res = 0;
	for(int i = 0; i < s.size(); i++)
	{
		res = res * 10 + s[i] - '0';
		res %= mod;
	}
	return res;
}

ll gcd(ll a, ll b)
{
	while(b)
	{
		ll tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

void solve()
{
	string s;
	ll a;
	//Nhap
	cin >> a >> s;
	ll b = du(s, a);
	cout << gcd(a, b) << "\n";
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