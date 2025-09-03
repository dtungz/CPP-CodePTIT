#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

vector<vector<char>> base = {{'a', 'b','c','0'},{'d', 'e','f','0'},{'g','h','i','0'},{'j','k','l','0'},{'m', 'n', 'o', '0'},{'p','q','r','s'},{'t','u','v','0'},{'w','x','y','z'}};
string give(char s)
{
	if(s >= 'a' && s <= 'c') return "2";
	else if(s >= 'd' && s <= 'f') return "3";
	else if(s >= 'g' && s <= 'i') return "4";
	else if(s >= 'j' && s <= 'l') return "5";
	else if(s >= 'm' && s <= 'o') return "6";
	else if(s >= 'p' && s <= 's') return "7";
	else if(s >= 't' && s <= 'v') return "8";
	else if(s >= 'w' && s <= 'z') return "9";
	return "";
}

void solve()
{
	string s, res = "";	cin >> s;
	for(char &it : s)
		it = tolower(it);
	for(auto it : s)
		res += give(it);
	int l = 0, r = res.size() - 1;
	while(l <= r)
	{
		if(res[l] != res[r])
		{
			cout << "NO\n";
			return;
		}
		l++;
		r--;
	}
	cout << "YES\n";
	//cout << res << endl;
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