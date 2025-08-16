#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct SinhVien
{
    string name, lop, msv;
    double gpa;
    int ngay, thang, nam;
};

void nhap(SinhVien &a)
{
    getline(cin, a.name);
    cin >> a.lop;
    scanf("%d/%d/%d", &a.ngay, &a.thang, &a.nam);
    cin >> a.gpa;
    a.msv = "B20DCCN001";
}

void in(SinhVien a)
{
    cout << a.msv << " " << a.name << " " << a.lop << " " ;
    printf("%02d/%02d/%d",a.ngay,a.thang,a.nam);
    cout << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}