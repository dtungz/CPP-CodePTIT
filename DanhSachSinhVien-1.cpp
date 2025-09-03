#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

struct SinhVien
{
	string msv ,name, lop, date;
	double gpa;
};

void fixDate(string& s)
{
	if(s[1] == '/') s = "0" + s;
	if(s[4] == '/') s.insert(3, "0");
}

void nhap(SinhVien sv[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		sv[i].msv = "B20DCCN";
		string ca = to_string(i + 1);
		while(ca.size() < 3)	ca = "0" + ca;
		sv[i].msv += ca;
		cin.ignore();
		getline(cin, sv[i].name);
		cin >> sv[i].lop >> sv[i].date >> sv[i].gpa;
		fixDate(sv[i].date);
	}
}

void in(SinhVien sv[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		cout << sv[i].msv << " " << sv[i]. name <<" "<< sv[i].lop << " " << sv[i].date << " " << fixed << setprecision(2) << sv[i].gpa << "\n";
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}