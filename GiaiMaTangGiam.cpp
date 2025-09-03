#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	stack<int> st;
	st.push(1);
	int pos = 2;
	string s;	cin >> s;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == 'D')
			st.push(pos++);
		else
		{
			while(!st.empty())
			{
				cout << st.top();
				st.pop();
			}
			st.push(pos++);
		}
	}	
	while(!st.empty())
	{
		cout << st.top();
		st.pop();
	}
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