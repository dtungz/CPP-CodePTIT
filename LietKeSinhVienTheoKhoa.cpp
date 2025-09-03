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
	if(x != y)
		return x < y;
	return a.getmsv() < b.getmsv();
}


int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;cin >> n;
	cin.ignore();
	sv data[n];
	for(int i = 0; i < n ; i++)
		cin >> data[i];
	//sort(data, data + n, cmp);
	int q;	cin >> q;
	while(q--)
	{
		string type;	cin >> type;
		cout << "DANH SACH SINH VIEN KHOA " << type << ":\n";
		for(int i = 0; i < n ; i++)
		{
			string temp = "20" + data[i].getlop().substr(1, 2);
			if(temp == type)
				cout << data[i];
		}
	}
	return 0;
}