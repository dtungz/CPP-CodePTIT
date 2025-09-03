#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k, b;	cin >> n >> k >> b;
	// n : Tong so den
	// k : So den can hoat dong trong 1 khu vuc
	// b : So den bi hong
	int a[n + 1];
	memset(a, 0, sizeof(a));
	while(b--)
	{
		int tmp;
		cin >> tmp;
		a[tmp] = 1;
	}
	int ans = k;
	int cnt = 0;
	for(int i = 1; i <= k; i++)
		cnt += a[i];
	for(int i = 1, j = k + 1; j <= n; j++, i++)
	{
		cnt = cnt + a[j] - a[i];
		ans = min(ans, cnt);
	}
	cout << ans << endl;
	//for(int i = 1; i <= n ; i++)	cout << a[i] << " ";
	return 0;
}