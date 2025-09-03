#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)
#define PI 3.141592653589793238

struct point
{
	double x, y;
};

void solve()
{
	point a, b, c;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
	double A = sqrt(pow(b.x - c.x, 2) + pow(b.y - c.y, 2));
	double B = sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
	double C = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
	if(A + B <= C || A + C <= B || B + C <= A)
	{
		cout << "INVALID\n";
		return;
	}
	double S = 1.0/4 * sqrt((A + B + C) * (A + B - C) * (A - B + C) * ( B + C - A));
	double R = A*B*C/(4 * S);
	double ans = PI * R * R;
	cout << fixed << setprecision(3) << ans << endl;
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