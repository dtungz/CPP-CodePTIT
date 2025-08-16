#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

struct PhanSo
{
    ll tu, mau;
};

void nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}

PhanSo tong(PhanSo a, PhanSo b)
{
    PhanSo ans;
    ans.mau = a.mau * b.mau;
    ans.tu = a.tu * b.mau + a.mau * b.tu;
    ll chung = gcd(ans.mau, ans.tu);
    ans.mau /= chung;
    ans.tu /= chung;
    return ans;
}

void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}