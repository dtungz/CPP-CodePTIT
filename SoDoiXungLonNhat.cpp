#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	string s;	cin >> s;
	int a[10];
	memset(a, 0, sizeof(a));
	for(char it : s)
		a[it - '0']++;
	string res = "";
	string middle = "";
	for(int i = 9; i>= 0; i--)
	{
		if(a[i] % 2 == 0)
			for(int j = 1; j <= a[i]/2; j++)
				res += to_string(i);
		if(i > 0 && a[i] % 2 == 1)
		{
			string temp = string(a[i], (char)(i + '0'));
			if(temp.size() > middle.size())
				middle = temp;
		}
	}
	string zeroNum = "";
	if(a[0] % 2 == 1)
		zeroNum = string(a[0], '0');
	while(res.size() > 0 && res[0] == '0')
		res.erase(0,1);
	string ans = res;
	if(ans.size() == 0)
		ans = middle;
	else
	{
		if(middle.size() >= zeroNum.size())
			ans += middle;
		else ans += zeroNum;
	}
	ans += string(res.rbegin(), res.rend());
	if(ans.size() == 0)
		cout << "";
	else cout << ans;
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