#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	set<string> base;
	unordered_set<string> temp;
	string	s, word; getline(cin ,s);
	stringstream ss(s);
	while(ss >> word)
		base.insert(word);
	getline(cin ,s);
	stringstream sss(s);
	while(sss >> word)
		temp.insert(word);
	for(auto it : base)
		if(!temp.count(it)) cout << it << " ";
	cout << endl;
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