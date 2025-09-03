#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

struct NhanVien
{
	string mnv, name, male, adr, thue, ngayt, date;
	int ngay, thang, nam;
};
int pos = 1;
int ok = 1;
void nhap(NhanVien& data)
{
	if(ok)
	{
		cin.ignore();
		ok = 0;
	}
	getline(cin, data.name);
	getline(cin, data.male);
	getline(cin, data.date);
	data.ngay = stoi(data.date.substr(3, 2));
	data.thang = stoi(data.date.substr(0, 2));
	data.nam = stoi(data.date.substr(6, 4));
	// cin >> data.ngay;
	// getchar();
	// cin >> data.thang;
	// getchar();
	// cin >> data.nam;
	// cin.ignore();
	getline(cin, data.adr);
	getline(cin, data.thue);
	getline(cin, data.ngayt);
	string temp = to_string(pos++);
	while(temp.size() < 5)
		temp = "0" + temp;
	data.mnv = temp;
}

bool cmp(NhanVien a, NhanVien b)
{
	if(a.nam != b.nam)
		return a.nam < b.nam;
	if(a.thang != b.thang)
		return a.thang < b.thang;
	return a.ngay < b.ngay;
}
void sapxep(NhanVien a[], int n)
{
	sort(a, a + n, cmp);
}

void inds(NhanVien a[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		cout << a[i].mnv << " " << a[i].name << " " << a[i].male << " " << a[i].date << " " << a[i].adr << " " << a[i].thue << " " << a[i].ngayt << "\n"; 
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}