#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

bool check(string s)
{
	if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4])
		return true;
	bool key1 = true, key2 = true;
	for(int i = 0; i < 4; i++)
	{
		if(s[i] != '6' && s[i] != '8')
			key1 = false;
		if(s[i] >= s[i+1])
			key2 = false;
	}
	if(s[4] != '6' && s[4] != '8')
			key1 = false;
	if(key1 || key2)
		return true;
	return false;
}

//2 9 T 1 – 1 2 3 . 4 5
//0 1 2 3 4 5 6 7 8 9 10
void solve()
{
	string s;
	getline(cin, s);
	string temp = s.substr(5,3);
	temp.push_back(s[9]);
	temp.push_back(s[10]);
	if(check(temp))
		cout << "YES\n";
	else cout << "NO\n";
	//cout << temp << endl;
}

signed main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;	cin >> t;
	cin.ignore();
	while(t--)
		solve();
	return 0;
}