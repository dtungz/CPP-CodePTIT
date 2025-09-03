#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

string multi(string a, char b)
{
	string ans = "";
	int ok = 0;
	int len = a.size();
	for(int i = len - 1; i >= 0; i--)
	{
		int n = a[i] - '0';
		int temp = n * (b - '0') + ok;
		ans = to_string(temp % 10) + ans;
		ok = temp / 10;
	}
	if(ok > 0)
		ans = to_string(ok) + ans;
	return ans;
}

string subtract(string a, string b) // a : Số bị trừ, b : Số Trừ -> a > b
{
	string ans = "";
	int ok = 0;
	int len = a.size();
	while(b.size() < len)
		b = "0" + b;
	//int ok = 0;
	for(int i = len - 1; i >= 0; i--)
	{
		int x = a[i] - '0';
		int y = b[i] - '0';
		int temp = x - y - ok;
		if(temp < 0)
		{
			temp += 10;
			ok = 1;
		}
		else ok = 0;
		ans = to_string(temp) + ans;
	}
	while(ans.size() > 1 && ans[0] == '0')
		ans.erase(0, 1);
	return ans;

}

bool compareString(string a, string b) // a > b : true // a < b : false
{
	if(a.size() == b.size())
		return a >= b;
	else
		return a.size() > b.size();
}

string divisor(string a, string b)
{
	string remember = "";
	string ans = "";
	if(!compareString(a, b))
		return "0";
	for(int i = 0; i < a.size(); i++)
	{
		remember.push_back(a[i]);
		while(remember.size() > 1 && remember[0] == '0')
			remember.erase(0, 1);
		if(!compareString(remember, b))
		{
			if(!ans.empty())
				ans.push_back('0');
			continue;
		}
		for(int j = 9; j >= 1; j--)
		{
			string temp = multi(b, (char)(j + '0'));
			if(compareString(remember, temp))
			{
				ans = ans + to_string(j);
				remember = subtract(remember, temp);
				break;
			}
		}
	}
	while(ans.size() > 1 && ans[0] == '0')
		ans.erase(0,1);
	return ans;
}

void solve()
{
	string a, b;	cin >> a >> b;
	cout << divisor(a, b) << endl;
	
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