#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int pos = 1;

class SinhVien
{
	private:
		string msv, name, lop, date;
		double gpa;
	public:
		friend istream& operator >>(istream& in, SinhVien &x)
		{
			scanf("\n");
			x.msv = "B20DCCN";
			string temp = to_string(pos++);
			while(temp.size() < 3)	temp = "0" + temp;
			x.msv += temp;
			//in.ignore();
			getline(in, x.name);
			x.fixname();
			in >> x.lop >> x.date >> x.gpa;
			if(x.date[1] == '/') x.date = "0" + x.date;
			if(x.date[4] == '/') x.date.insert(3, "0");
			return in;
		}
		friend ostream& operator <<(ostream& out, SinhVien x)
		{
			out << x.msv << " " << x.name << " " << x.lop << " " << x.date << " " << fixed << setprecision(2) << x.gpa << "\n";
			return out;
		}
		void fixname()
		{
			int len = name.size();
			for(int i = 0; i < len ; i++)
				name[i] = tolower(name[i]);
			string word, res = "";
			stringstream ss(name);
			while(ss >> word)
			{
				word[0] = toupper(word[0]);
				res += word + " ";
			}
			res.pop_back();
			name = res;
		}
		double getGPA()
		{
			return gpa;
		}
};

bool cmp(SinhVien a, SinhVien b)
{
	double x = a.getGPA(), y = b.getGPA();
	return x > y;
}

void sapxep(SinhVien ds[], int n)
{
	sort(ds, ds + n, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

// Mã SV, Họ tên, Lớp và Điểm GPA (dạng số thực float)