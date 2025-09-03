#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

bool done = false;
bool run = true;

string process(string s, int idx, map<char, int> mp)
{
	string res = "";
	int len = mp.size();
	for(int i = idx; i < s.size(); i++)
	{
		res.push_back(s[i]);
		mp[s[i]]--;
		if(mp[s[i]] == 0)
		{
			len--;
			if(len == 0)
			{
				done = true;
				return res;
			}
		}
	}
	run = false;
	return res;
}

void solve()
{
	done = false;
	run = true;
	string a, b;	cin >> a >> b;
	string res = a;
	map<char,int> mp;
	for(char& it : b)
		mp[it]++;
	for(int i = 0; i < a.size() ; i++)
	{
		string temp = process(a, i, mp);
		if(run == false)
			break;
		if(temp.size() < res.size())
			res = temp;
	}
	if(!done)
		cout << -1 << endl;
	else
		cout << res << "\n";
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
