#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

void solve()
{
	int n, k, x;
	cin >> n;
	vector<int> v(n);
	for(int& it : v)	cin >> it;
	sort(v.begin(), v.end());
	cin >> k >> x;;
	int m = lower_bound(v.begin(), v.end(), x) - v.begin();
	//cout << m;
	int l, r;
	if(v[m] == x) //TH Tồn tại x
	{
		l = m - 1;
		r = m + 1;
	}
	else
	{
		l = m - 1;
		r = m;
	}
	for(int i = k/2 - 1; i >= 0; i--)
		cout <<v[l - i] << " ";
	for(int i = 0; i < k/2;i++)
		cout << v[r + i] << " ";
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