#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

map<string, int> mp;


void solve()
{
	string ans = "";
	string s, word;	getline(cin, s);
	for(char &it : s)
		it = tolower(it);
	stringstream ss(s);
	vector<string> name;
	while(ss >> word)
		name.push_back(word);
	int len = name.size();
	ans += name[len - 1];
	for(int i =  0; i < len - 1; i++)
		ans.push_back(name[i][0]);
	if(mp[ans] == 0)
	{
		mp[ans] = 1;
		cout << ans;
	}
	else
	{
		mp[ans]++;
		cout << ans << mp[ans];
	}
	cout << "@ptit.edu.vn\n";
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;	cin >> t;
	cin.ignore();
	while(t--)
		solve();
	return 0;
}