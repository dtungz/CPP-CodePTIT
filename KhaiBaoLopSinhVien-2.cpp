#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SinhVien
{
    private:
        string name, lop, msv;
        int ngay, thang, nam;
        double gpa;
    public:
        SinhVien()
        {
            msv = "B20DCCN001";
        }
        friend istream& operator >> (istream& in, SinhVien &x)
        {
            getline(in, x.name);
            char c;
            in >> x.lop >> x.ngay >> c >> x.thang >> c >> x.nam >> x.gpa;
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien x)
        {
            out << x.msv << " " << x.name << " " << x.lop << " ";
            out << setw(2) << setfill('0') << x.ngay << "/" << setw(2) << setfill('0') << x.thang <<"/"<< x.nam <<" " << fixed << setprecision(2)<< x.gpa;
            return out;
        }
};


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}