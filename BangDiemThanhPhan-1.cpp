#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)
// Mỗi sinh viên ghi trên 1 dòng gồm các thông tin: 
// thứ tự, mã sv, họ tên, lớp, điểm 1, điểm 2, điểm 3
int pos = 1;

struct SinhVien
{
	int stt;
	string msv, name, lop;
	double diem1, diem2, diem3, gpa;
};

void nhap(SinhVien &data)
{
	data.stt = pos++;
	cin >> data.msv;
	cin.ignore();
	getline(cin, data.name);
	cin >> data.lop >> data.diem1 >> data.diem2 >> data.diem3;
}

bool cmp(SinhVien a, SinhVien b)
{
	// string x = a.msv.substr(7, 3);
	// string y = b.msv.substr(7, 3);
	// return x < y;
	return a.msv < b.msv;
}

void sap_xep(SinhVien a[], int n)
{
	sort(a, a + n, cmp);
}

void in_diem(double c)
{
	cout << fixed << setprecision(1) << c << " ";
}

void in_ds(SinhVien ds[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		cout << i + 1 << " " << ds[i].msv << " " << ds[i].name << " " << ds[i].lop << " ";
		in_diem(ds[i].diem1);	in_diem(ds[i].diem2);	in_diem(ds[i].diem3);
		cout << endl;
	}

}


int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}