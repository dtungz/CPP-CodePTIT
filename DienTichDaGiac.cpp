#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

struct point{double x, y;};

double arena(vector<point> v, int n)
{
	double res = 0;
	for(int i = 0; i < n - 1; i++)
		res += v[i].x * v[i + 1].y - v[i].y * v[i+1].x;
	res += v[0].y * v[n-1].x - v[0].x * v[n-1].y;
	return 1.0/2 * abs(res);
}

void solve()
{
	int n;	cin >> n;
	vector<point> v(n);
	for(int i = 0; i < n ; i++)
		cin >> v[i].x >> v[i].y;
	cout <<fixed << setprecision(3) << arena(v, n) << endl;
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