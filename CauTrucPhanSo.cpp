#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct PhanSo{
    ll tu, mau;
};

ll gcd(ll a, ll b)
{
    while(b != 0)
    {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}

void rutgon(PhanSo &a)
{
    ll chung = gcd(a.tu, a.mau);
    a.tu = a.tu/chung;
    a.mau = a.mau/chung;
}

void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}