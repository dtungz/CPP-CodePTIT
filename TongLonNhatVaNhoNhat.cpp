#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

ll stringMin(string a, string b)
{
	ll x = 0, y = 0;
	for(int i = 0; i< a.size(); i++)
	{
		if(a[i] == '6')	a[i] = '5';
		x = x*10 + a[i] - '0';
	}
	for(int i = 0; i< b.size(); i++)
	{
		if(b[i] == '6') b[i] = '5';
		y = y * 10 + b[i] - '0';
	}
	return x + y;
}

ll stringMax(string a, string b)
{
	ll x = 0, y = 0;
	for(int i = 0; i< a.size(); i++)
	{
		if(a[i] == '5')	a[i] = '6';
		x = x*10 + a[i] - '0';
	}
	for(int i = 0; i< b.size(); i++)
	{
		if(b[i] == '5') b[i] = '6';
		y = y * 10 + b[i] - '0';
	}
	return x + y;
}
void solve()
{
	string a, b;
	cin >> a >> b;
	cout << stringMin(a, b) << " " << stringMax(a, b) << "\n";
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