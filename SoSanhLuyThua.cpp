#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n, m;	cin >> n >> m;
	int a[n], b[m];
	FOE(it , a)	cin >> it;
	FOE(it , b)	cin >> it;
	sort(b, b + m);
	int special[5] = {0};
	for(int i = 0; i < m; i++)
	{
		if(b[i] < 5)
			special[b[i]]++;
	}
	int res = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 0)
			continue;
		if(a[i] == 1)
			res += special[0];
		else
		{
			int* j = upper_bound(b, b + m, a[i]);
			int x = (b + m) - j;
			x += special[0] + special[1];
			if(a[i] == 2)
				x -= (special[3] + special[4]);
			if(a[i] == 3)
				x += special[2];
			res += x;
		}
 	}
 	cout << res << endl;
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

// TH 1 : x = 0, y = k bất kì
// -> x^y = 0^y = 0 và y^0 = 1 => x^y < y^x với mọi y khi x = 0;
// TH 2 : x = 1
// -> x^y = 1 và y^x = y => Chỉ đúng khi y = 0;
// TH 3 : x > y
// -> Thường x^y > y^x (Trừ trường hợp 4)
// TH 4 : x = 2 => không nhận y = 3 , 4;