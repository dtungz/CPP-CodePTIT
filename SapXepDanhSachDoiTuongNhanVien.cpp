#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int pos = 1;

class NhanVien
{
	public:
		string msv, name, male, ad, thue, date;
		int ngay, thang, nam;
		friend istream& operator >> (istream& in, NhanVien& x)
		{
			scanf("\n");
			getline(cin, x.name);
			cin >> x.male;
			scanf("%d/%d/%d\n",&x.thang, &x.ngay, &x.nam);
			getline(cin, x.ad);
			cin >> x.thue >> x.date;
			x.msv = to_string(pos++);
			while(x.msv.size() < 5)
				x.msv = "0" + x.msv;
			return in;
		}
		friend ostream& operator << (ostream& out, NhanVien x)
		{
			cout << x.msv << " " << x.name << " " << x.male << " ";
			printf("%02d/%02d/%02d ",x.thang, x.ngay, x.nam);
			cout << x.ad << " " << x.thue << " " << x.date << "\n";
			return out;
		}
};

bool cmp(NhanVien a, NhanVien b)
{
	if(a.nam != b.nam)
		return a.nam < b.nam;
	if(a.thang != b.thang)
		return a.thang < b.thang;
	return a.ngay < b.ngay;
}

void sapxep(NhanVien ds[], int n)
{
	sort(ds, ds + n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}