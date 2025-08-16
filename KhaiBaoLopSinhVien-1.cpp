#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SinhVien
{
    private:
        string name, lop, msv;
        double gpa;
        int ngay, thang, nam;
    public:
        void nhap()
        {
            msv = "B20DCCN001";
            getline(cin, name);
            cin >> lop;
            scanf("%d/%d/%d",&ngay, &thang, &nam);
            cin >> gpa;
        }
        void xuat()
        {
            cout << msv << " " << name << " " << lop << " ";
            printf("%02d/%02d/%02d ",ngay, thang, nam);
            cout << fixed << setprecision(2) << gpa;
        }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}