#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n;	cin >> n;
	int a[n], b[n], j = 0;
	for(int i = 0; i < n ; i++)
		cin >> a[i];
	sort(a, a + n);
	for(int i = 0; i < n; i+= 2)
		b[i] = a[j++];
	for(int i = 1; i < n; i+= 2)
		b[i] = a[j++];
	for(auto it : b)
		cout << it << " ";
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