#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n;	cin >> n;
	int a[n];
	for(int &it : a)	cin >> it;
	sort(a, a + n);
	int l = 0, r = n - 1;
	while(l <= r)
	{
		cout << a[r] << " ";
		if(l != r) cout << a[l] << " ";
		r--; l++;
	}
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