#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

ll c;


ll multi(ll a, ll b)
{
	if(a <= 1e9 && b <= 1e9)
		return ((a % c) * (b %c)) % c;
	if(b == 1)
		return a % c;
	if(a > b)
		swap(a, b);
	ll temp = multi(a, b/2);
	if(b % 2 == 0)
		return ((temp % c) + (temp % c)) % c;
	return	(temp % c + temp % c + a) % c; 
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;	cin >> t;
	while(t--)
	{
		ll a, b;
		cin >> a >> b >> c;
		cout << multi(a, b) << endl;
	}
	return 0;
}