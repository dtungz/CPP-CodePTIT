#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

class sv{
public:
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

string solve(string s)
{
	if(s == "Ke toan") return "KT";
	if(s == "Cong nghe thong tin") return "CN";
	if(s == "An toan thong tin") return "AT";
	if(s == "Vien thong") return "VT";
	if(s == "Dien tu") return "DT";
	return "  ";
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
	cin.ignore();
	while(q--)
	{
		string type;
		getline(cin, type);
		string major = solve(type);
		transform(type.begin(), type.end(), type.begin(), :: toupper);
		cout << "DANH SACH SINH VIEN NGANH " << type << ":\n";
		for(int i = 0; i < n; i++)
		{
			if(major == "CN" || major == "AT")
			{
				if(data[i].msv[5] == major[0] && data[i].msv[6] == major[1] && data[i].lop[0] != 'E')
					cout << data[i];
			}
			else
			{
				if(data[i].msv[5] == major[0] && data[i].msv[6] == major[1])
					cout << data[i];
			}
		}
	}
	return 0;
}