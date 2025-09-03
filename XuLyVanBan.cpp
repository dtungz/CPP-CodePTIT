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
	string s;
	int ok = 1;
	while(cin >> s)
	{
		int len = s.size();
		for(char &it : s)
			it = tolower(it);
		for(int i = 0 ;i < len ; i++)
		{
			if(ok)
			{
				s[i] = toupper(s[i]);
				ok = 0;
			}
			if(s[i] == '.' || s[i] == '?' || s[i] == '!')
			{
				cout << "\n";
				ok = 1;
			}
			else
				cout << s[i];
		}
		if(!ok)
			cout << " ";
	}
	
	return 0;
}