#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

struct Time{
	int gio, phut, giay;
};

bool cmp(Time a, Time b)
{
	if(a.gio != b.gio)
		return a.gio < b.gio;
	if(a.phut != b.phut)
		return a.phut < b.phut;
	return a.giay < b.giay;
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;cin >> n;
	Time a[n];
	for(int i = 0; i < n ; i++)
	{
		cin >> a[i].gio >> a[i].phut >> a[i].giay;
	}
	sort(a, a + n, cmp);
	for(int i = 0 ; i < n ; i++)
		cout << a[i].gio<< " " << a[i].phut<< " " << a[i].giay << endl;
	return 0;
}