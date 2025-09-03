#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)
bool first = true;
int pos = 1;

class NhanVien{
	private:
		string msv, name, male, date, adr, thue, date2, id;
	public:
		friend istream& operator >> (istream& in, NhanVien &x)
		{
			x.id = to_string(pos++);
			while(x.id.size() < 5) x.id = "0" + x.id;
			if(first)
			{
				scanf("\n");
				first = false;
			}
			//getline(in, x.msv);
			getline(in, x.name);
			getline(in, x.male);
			getline(in, x.date);
			getline(in, x.adr);
			getline(in, x.thue);
			getline(in, x.date2);
			return in;
		}
		friend ostream& operator << (ostream& out, NhanVien x)
		{
			out << x.id << " " << x.name << " " << x.male << " " << x.date << " " << x.adr << " " << x.thue << " " << x.date2 << "\n";
			return out;
		}
};


int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

// Mã nhân viên: được gán tự động tăng, bắt đầu từ 00001
// Họ tên: Xâu ký tự không quá 40 chữ cái.
// Giới tính: Nam hoặc Nu
// Ngày sinh: đúng theo chuẩn dd/mm/yyyy
// Địa chỉ: Xâu ký tự không quá 100 chữ cái
// Mã số thuế: Dãy số có đúng 10 chữ số
// Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy