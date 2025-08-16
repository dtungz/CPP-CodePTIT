#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    while(b)
    {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

class PhanSo
{
    private :
        ll tu, mau;
    public:
        PhanSo(ll a, ll b)
        {
            tu = a;
            mau = b;
        }
        friend istream& operator >> (istream& in, PhanSo& x)
        {
            in >> x.tu >> x.mau;
            return in;
        }
        friend PhanSo operator + (PhanSo a, PhanSo b)
        {
            PhanSo ans(1, 1);
            ans.mau = a.mau * b.mau;
            ans.tu = a.tu * b.mau + a.mau * b.tu;
            ll chung = gcd(ans.tu, ans.mau);
            ans.tu /= chung;
            ans.mau /= chung;
            return ans;
        }
        friend ostream& operator << (ostream& out, PhanSo x)
        {
            out << x.tu << "/" << x.mau;
            return out;
        }
};


int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}