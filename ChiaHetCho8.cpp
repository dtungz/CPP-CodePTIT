#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


int process(string s, int mod)
{
	int count = 0;
	for(int i = 0; i < s.size(); i++)
	{
		int n = 0;
		for(int j = i; j < s.size(); j++)
		{
			n = n * 10 + (s[j] - '0');
			n %= mod;
			if(n == 0)
				count++;
		}
	}
	return count;
}

void solve()
{
	string s;	cin >> s;
	cout << process(s, 8) - process(s, 24) << endl;
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