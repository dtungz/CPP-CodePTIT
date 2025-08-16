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
    private:
        ll tu, mau;
    public:
        PhanSo(ll a, ll b)
        {
            tu = a;
            mau = b;
        }
        friend istream& operator >> (istream& in, PhanSo &x)
        {
            in >> x.tu >> x.mau;
            return in;
        }
        void rutgon()
        {
            ll chung = gcd(tu,mau);
            tu /= chung;
            mau/=chung;
        }
        friend ostream& operator << (ostream& out, PhanSo x)
        {
            out << x.tu << "/" << x.mau;
            return out;
        }

};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}