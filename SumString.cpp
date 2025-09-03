#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

string sum(string a, string b)
{
	int ok = 0;
	int len = max(a.size(), b.size());
	while(a.size() < len)
		a = "0" + a;
	while(b.size() < len)
		b = "0" + b;
	string res = "";
	for(int i = len - 1; i >= 0; i--)
	{
		int x = a[i] - '0';
		int y = b[i] - '0';
		int temp = x + y + ok;
		res = to_string(temp % 10) + res;
		ok = temp / 10;
	}
	if(ok > 0)
		res = to_string(ok) + res;
	return res;
}

bool check(string a, string b, string s)
{
	int x = a.size() + b.size();
	int len = s.size();
	while(x < len)
	{
		string c = sum(a, b);
		string d = s.substr(x, c.size());
		if(c == d){
			a = b; b = c; x += c.size();
		}
		else return false;
	}
	return true;
}

string process(string s)
{
	int len = s.size();
	string a;
	for(int i = 0; i <= len / 2; i++)
	{
		a.push_back(s[i]);
		string b;
		for(int j = i + 1; j <= len * 2 / 3; j++)
		{
			b.push_back(s[j]);
			if(check(a, b, s))
				return "Yes\n";
		}
	}
	return "No\n";
}


void solve()
{
	string s;	cin >> s;
	cout << process(s);
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