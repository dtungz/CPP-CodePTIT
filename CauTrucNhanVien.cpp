#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct NhanVien{
    string msv, name, male, ad, id;
    int ngay, thang, nam, day, month, year;
};

void nhap(NhanVien &a)
{
    a.msv = "00001";
    getline(cin, a.name);
    cin >> a.male;
    scanf("%d/%d/%d\n",&a.ngay, &a.thang, &a.nam);
    getline(cin, a.ad);
    cin >> a.id;
    scanf("%d/%d/%d\n",&a.day, &a.month, &a.year);
}

void in(NhanVien a)
{
    cout << a.msv << " " << a.name << " " << a.male ;
    printf(" %02d/%02d/%d ",a.ngay,a.thang,a.nam);
    cout << a.ad << " " << a.id << " ";
    printf("%02d/%02d/%d",a.day, a.month, a.year);
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}




// Mã nhân viên: được gán giá trị là 00001
// Họ tên: Xâu ký tự không quá 40 chữ cái.
// Giới tính: Nam hoặc Nu
// Ngày sinh: đúng theo chuẩn dd/mm/yyyy
// Địa chỉ: Xâu ký tự không quá 100 chữ cái
// Mã số thuế: Dãy số có đúng 10 chữ số
// Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy