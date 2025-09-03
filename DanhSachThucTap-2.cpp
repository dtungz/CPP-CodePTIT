#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

struct sv
{
	int stt;
	string msv, name, lop, email, dn;
};

void nhap(sv &a)
{
	getline(cin, a.msv);
	getline(cin, a.name);
	getline(cin, a.lop);
	getline(cin, a.email);
	getline(cin, a.dn);
}

bool cmp(sv a, sv b)
{
	return a.msv < b.msv;
}

void in(sv a)
{
	cout << a.stt << " " << a.msv << " " << a.name << " " << a.lop << " " << a.email << " " << a.dn << "\n";
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;	cin >> n;
	cin.ignore();
	sv a[n];
	for(int i = 0; i < n ; i++)
	{
		nhap(a[i]);
		a[i].stt = i + 1;
	}
	sort(a, a + n, cmp);
	int q;	cin >> q;
	while(q--)
	{
		string type;
		cin >> type;
		for(int i = 0; i< n ; i++)
			if(a[i].dn == type)
				in(a[i]);
	}
	
	return 0;
}


// Thông tin của mỗi sinh viên trong danh sách thực tập bao gồm:

// Số thứ tự: là 1 số nguyên tự động tăng
// Mã sinh viên: là một xâu ký tự không có khoảng trống, không quá 12 ký tự
// Họ tên: là một xâu ký tự họ tên đã chuẩn hóa, không quá 50 ký tự
// Lớp: là một xâu ký tự không có khoảng trống, không quá 10 ký tự
// Email: là một địa chỉ email, không có khoảng trống, không quá 100 ký tự
// Doanh nghiệp: tên viết tắt của doanh nghiệp, không có khoảng trống, không quá 15 ký tự.