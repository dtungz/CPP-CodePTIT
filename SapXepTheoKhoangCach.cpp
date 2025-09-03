#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n, k;	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0;i < n ; i++)
		cin >> v[i];
	for(int i = 0; i < n - 1; i++)
		for(int j = 0; j < n - i - 1; j++)
		{
			if(abs(k - v[j]) > abs(k - v[j + 1]))
				swap(v[j], v[j + 1]);
		}
	for(int i = 0; i < n ; i++)
		cout << v[i] << " ";
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