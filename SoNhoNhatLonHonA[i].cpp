#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n;	cin >> n;
	vector<int> a(n);
	for(int &it : a)	cin >> it;
	vector<int> b(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(int i = 0; i < n ; i++)
	{
		if(upper_bound(b.begin(), b.end(), a[i]) == b.end())
			cout << "_ ";
		else cout << b[upper_bound(b.begin(), b.end(), a[i]) - b.begin()] << " ";
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