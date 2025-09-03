#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

class sv{
private:
	string msv, name, lop, email;
public:
	friend istream& operator >> (istream& in, sv &x)
	{
		getline(cin, x.msv);
		getline(cin, x.name);
		getline(cin, x.lop);
		getline(cin, x.email);
		return in;
	}
	friend ostream& operator << (ostream& out, sv x)
	{
		cout << x.msv << " " << x.name << " " << x.lop << " " << x.email << "\n";
		return out;
	}
	string getlop()
	{
		return lop;
	}
	string getmsv()
	{
		return msv;
	}
};

bool cmp(sv a, sv b)
{
	string x = a.getlop();
	string y = b.getlop();
	// if(x != y)
	// 	return x < y;
	return a.getmsv() < b.getmsv();
}

int pos = 0;
int main()
{
	sv a;
	sv data[10001];
	while(cin >> a)
		data[pos++] = a;
	sort(data, data + pos, cmp);
	for(int i = 0 ; i < pos ; i++)
		cout << data[i];
}