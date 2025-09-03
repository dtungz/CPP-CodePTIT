#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

class dnghiep
{
	public:
		string name, dn;
		int sl;
		friend istream& operator >> (istream& in, dnghiep &x)
		{
			in >> x.name;
			in.ignore();
			getline(in, x.dn);
			in >> x.sl;
			return in;
		}
		friend ostream& operator << (ostream& out, dnghiep x)
		{
			out << x.name << " " << x.dn << " " << x.sl << endl;
			return out;
		}

};

bool cmp(dnghiep a, dnghiep b)
{
	if(a.sl != b.sl)
		return a.sl > b.sl;
	return a.name < b.name;
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;	cin >> n;
	//cin.ignore();	
	dnghiep a[n];
	for(int i = 0; i < n ; i++)
		cin >> a[i];
	sort(a, a + n, cmp);
	int q;	cin >> q;
	while(q--)
	{
		int x, y;	cin >> x >> y;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << x << " DEN " <<y << " SINH VIEN:\n";
		for(int i = 0; i < n ; i++)
			if(x <= a[i].sl && y >= a[i].sl)
				cout << a[i];
	}
	return 0;
}