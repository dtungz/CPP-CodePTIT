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
	for(int i = 0; i < n - 1 ; i++)
	{
		if(a[i] == 0)	continue;
		if(a[i] == a[i + 1])
		{
			a[i] *= 2;
			a[i + 1] = 0;
		}
	}
	int cnt = 0;
	for(int i = 0; i < n ; i++)
	{
		if(a[i] != 0)
			cout << a[i] << " ";
		else
			cnt++;
	}
	for(int i = 1; i<= cnt ; i++)
		cout << "0 ";
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