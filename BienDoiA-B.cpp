	#include <bits/stdc++.h>
	using namespace std;
	#define ll long long
	#define FOR(i, a, b) for(int i = a; i <= b; i++)
	#define FOL(i, a, b) for(int i = a; i >= b; i--)
	#define FOE(it, a) for(int& it : a)


	int main()
	{
		ios_base :: sync_with_stdio(0);
		cin.tie(0); cout.tie(0);
		string s;	cin >> s;
		int cnt = 0;
		for(int i = 1; i < s.size() - 1; i++)
		{
			if(s[i] == 'A' && s[i-1] == 'B' && s[i + 1] == 'B')
			{
				cnt++;
				s[i] = 'B';
			} 
			if(s[i] == 'B' && s[i-1] == 'A' && s[i + 1] == 'A')
			{
				cnt++;
				s[i] = 'A';
			} 
		}
		if(s[0] == 'B' && s[1] == 'A')
		{
			cnt++;
			s[0] = 'A';
		}
		if(s[s.size() - 1] == 'B' && s[s.size() - 2] == 'A')
		{
			cnt++;
			s[s.size() - 1] = 'A';
		}
		for(int i = 1; i < s.size(); i++)
		{
			if(s[i] != s[i - 1])
				cnt++;
		}
		if(s[s.size() - 1] == 'B')
			cnt++;
		cout << cnt;
		return 0;
	}


