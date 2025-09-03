#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	ll n;	cin >> n;
	vector<pair<int,int>> v(n);
	for(int i = 0; i< n ; i++)
	{
		v[i].second = i;
		cin >> v[i].first;
	}
	sort(v.begin(), v.end());
	int l = 0, r = n - 1;
	while(l == v[l].second)
		l++;
	while(r == v[r].second)
		r--;
	cout << l + 1 << " " << r + 1 << endl;

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