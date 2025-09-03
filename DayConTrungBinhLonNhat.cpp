#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n, k;	cin >> n >> k;
	int l, r;
	double sum = 0, ans = -1e6;
	double a[n];
	for(double& it : a)	cin >> it;
	for(int i = 0; i < k; i++)
		sum += a[i];
	int i, j;
	if(ans < sum/k)
	{
		ans = sum / k;
		l = 0; r = k-1;
	}
	i = 0, j = k;
	for(; j < n; i++, j++)
	{
		sum = sum - a[i] + a[j];
		if(ans < sum / k)
		{
			ans = sum / k;
			l = i + 1, r = j;
		}
	}
	//cout << (int)a[l] << " " << (int)a[r] << endl;
	for(int i1 = l; i1 <= r; i1++)
		cout << int(a[i1]) << " ";
	cout << endl;
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