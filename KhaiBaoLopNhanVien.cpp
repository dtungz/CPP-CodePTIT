#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Mã nhân viên: được gán giá trị là 00001
// Họ tên: Xâu ký tự không quá 40 chữ cái.
// Giới tính: Nam hoặc Nu
// Ngày sinh: đúng theo chuẩn mm/dd/yyyy
// Địa chỉ: Xâu ký tự không quá 100 chữ cái
// Mã số thuế: Dãy số có đúng 10 chữ số
// Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy

class NhanVien
{
    private:
        string mnv, name, male, date, add, thue, ngay;
    public:
        friend istream& operator >> (istream& in, NhanVien& x)
        {
            x.mnv = "00001";
            getline(in, x.name);
            getline(in, x.male);
            getline(in, x.date);
            getline(in, x.add);
            getline(in, x.thue);
            getline(in, x.ngay);
            return in;
        }
        // friend ostream& operator >> (ostream& out, NhanVien x)
        // {
        //     out << x.mnv << " " << x.name << " " << x.male << " " << x.date << " " << x.add << " " << x.thue << " " << x.ngay;
        //     return out;
        // }
        friend ostream& operator >> (ostream& out, NhanVien& x)
        {
            out << x.mnv << " " << x.name << " " << x.male << " " << x.date << " " << x.add << " " << x.thue << " " << x.ngay;
            return out;
        }
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}