#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SinhVien
{
    private:
        string msv, name, lop, date;
        double gpa;
    public:
        SinhVien(){
            msv = "B20DCCN001";
        }
        void fixName()
        {
            int len = name.size();
            stringstream ss(name);
            string res = "", word;
            while(ss >> word)
            {
                res += toupper(word[0]);
                for(int i = 1; i< word.size(); i++)
                    res += tolower(word[i]);
                res += " ";
            }
            res.pop_back();
            name = res;
        }

        void fixDate()
        {
            if(date[1] == '/')
                date = "0" + date;
            if(date[4] == '/')
                date.insert(3, "0");
        }
        friend istream& operator >> (istream& in, SinhVien& x)
        {
            getline(in, x.name);
            in >> x.lop >> x.date >> x.gpa;
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien x)
        {
            x.fixDate();  x.fixName();
            out << x.msv << " " << x.name << " " << x.lop << " " << x.date << " " << fixed << setprecision(2) << x.gpa;
            return out;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}