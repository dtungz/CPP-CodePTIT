#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int type;	cin >> type;
	cin.ignore();
	string s, word;	getline(cin, s);
	for(char& it : s)
		it = tolower(it);
	vector<string> name;
	stringstream ss(s);
	while(ss >> word)
	{
		word[0] = toupper(word[0]);
		name.push_back(word);
	}
	int len = name.size();
	if(type == 1)
	{
		cout << name[len - 1] << " ";
		for(int i = 0; i < len - 1; i++)
			cout << name[i] << " ";
	}
	else
	{
		for(int i = 1; i < len ; i++)
			cout << name[i] << " ";
		cout << name[0];
	}
	cout << "\n";
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