#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

struct item
{
	string name, sp;
	int idx;
	double loi;
};



item nhap()
{
	item a;
	cin.ignore();
	getline(cin, a.name);
	getline(cin, a.sp);
	double c, b;
	cin >> c >> b;
	a.loi = b - c;
	return a;
}

bool cmp(item a, item b)
{
	if(a.loi > b.loi) return 1;
	return 0;
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;	cin >> n;
	item data[n];
	for(int i = 0 ; i < n ; i++)
	{
		data[i] = nhap();
		data[i].idx = i + 1;
	}
	sort(data, data + n, cmp);
	for(int i = 0; i < n ; i ++)
	{
		cout << data[i].idx << " " << data[i].name << " " << data[i].sp << " " << fixed << setprecision(2) << data[i].loi << "\n";
	}
	return 0;
}