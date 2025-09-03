#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)
ll res = 0;

int sum(string s)
{
	if(s.size() > 10)
		return 0;
	int pos = 0;
	if(s[0] == '-')
		pos++;
	for(int i = pos; i < s.size(); i++)
		if(!isdigit(s[i]))
			return 0;
	int num = stoi(s.substr(pos));
	if(pos == 1)
		num *= -1;
	return num;
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen ("DATA.in", "r", stdin);
	string s;
	while(cin >> s)
		res += sum(s);
	cout << res;
	return 0;
}