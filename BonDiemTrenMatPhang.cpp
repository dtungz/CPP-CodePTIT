	#include <bits/stdc++.h>
	using namespace std;
	#define ll long long
	#define FOR(i, a, b) for(int i = a; i <= b; i++)
	#define FOL(i, a, b) for(int i = a; i >= b; i--)
	#define FOE(it, a) for(int& it : a)

	struct point{
		ll x, y, z;
	};

	void nhap(point& a)
	{
		cin >> a.x >> a.y >> a.z;
	}

	void solve()
	{
		point p1, p2, p3, p4;
		nhap(p1); nhap(p2); nhap(p3); nhap(p4);
		point p12 = {p2.x - p1.x, p2.y - p1.y, p2.z - p1.z};
		point p13 = {p3.x - p1.x, p3.y - p1.y, p3.z - p1.z};
		point p14 = {p4.x - p1.x, p4.y - p1.y, p4.z - p1.z};
		point n = {p12.y * p13.z - p12.z * p13.y, p12.z * p13.x - p12.x * p13.z, p12.x * p13.y - p12.y * p13.x};
		ll dot = p14.x * n.x + p14.y * n.y + p14.z * n.z;
		if(dot == 0) cout << "YES\n";
		else cout << "NO\n";
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