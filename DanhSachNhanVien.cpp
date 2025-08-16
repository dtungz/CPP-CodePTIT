#include <bits/stdc++.h>
using namespace std;
#define ll long long

int step = 1;

struct NhanVien
{
    string name, date, male, ad, id, mnv;
    int ngay, thang, nam, day, month, year;
};

void nhap(NhanVien &a)
{
    scanf("\n");
    getline(cin, a.name);
    cin >> a.male;
    scanf("%d/%d/%d\n",&a.ngay, &a.thang, &a.nam);
    getline(cin, a.ad);
    cin >> a.id;
    scanf("%d/%d/%d",&a.day, &a.month, &a.year);
    a.mnv = to_string(step);
    while(a.mnv.size() < 5)
        a.mnv = "0" + a.mnv;
    step++;
}

void inds(NhanVien a[], int n)
{
    for(int i = 0; i< n; i++)
    {
        cout << a[i].mnv << " " << a[i].name << " " << a[i].male << " ";
        printf("%02d/%02d/%02d ", a[i].ngay,a[i].thang,a[i].nam);
        cout << a[i].ad << " " << a[i].id << " ";
        printf("%02d/%02d/%02d\n", a[i].day,a[i].month,a[i].year);
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}


// Một nhân viên làm việc trong công ty được lưu lại các thông tin sau:

// Mã nhân viên: được gán tự động tăng, bắt đầu từ 00001
// Họ tên: Xâu ký tự không quá 40 chữ cái.
// Giới tính: Nam hoặc Nu
// Ngày sinh: đúng theo chuẩn dd/mm/yyyy
// Địa chỉ: Xâu ký tự không quá 100 chữ cái
// Mã số thuế: Dãy số có đúng 10 chữ số
// Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy