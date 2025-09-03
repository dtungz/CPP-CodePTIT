#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)
#define lli long long int

//Áp dụng số chỉnh hợp lặp
// n! / (Tổng giai thừa của các phần tử)

lli gt[21];
void ktao()
{
	gt[0] = 1;
	for(lli i = 1; i <= 20; i++)
		gt[i] = gt[i - 1] * i;
}

void solve()
{
	lli n, r, g, b;	cin >> n >> r >> g >> b;
	lli res = 0;
	lli left = n - r - g - b;
	for(lli i = 0; i <= left; i++)
	{
		for(lli j = 0; j <= left - i; j++)
		{
			lli k = left - i - j;
			res = res + gt[n] / (gt[i + r] * gt[j + g] * gt[k + b]);
		}
	}
	cout << res << endl;

}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ktao();
	int t;	cin >> t;
	while(t--)
		solve();
	return 0;
}