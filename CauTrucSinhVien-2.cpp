#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Mã SV, Họ tên, Lớp, Ngày sinh và Điểm GPA (dạng số thực float).

struct SinhVien
{
    string msv, name, lop, date;
    double gpa;
};

void nhapThongTinSV(SinhVien &x)
{
    x.msv = "N20DCCN001";
    getline(cin, x.name);
    cin >> x.lop >> x.date >> x.gpa;
}

void inThongTinSV(SinhVien x)
{
    cout << x.msv << " " << x.name << " " << x.lop << " ";
    if(x.date[1] == '/') x.date = "0" + x.date;
    if(x.date[4] == '/') x.date.insert(3, "0");
    cout << x.date << " " << fixed << setprecision(2) << x.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}