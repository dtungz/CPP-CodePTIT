#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

struct PhanSo
{
    ll tu, mau;
};

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

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

void process(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c.mau = a.mau * b.mau;
    ll chung = gcd(abs(c.tu), abs(c.mau));
    c.tu /= chung;
    c.mau /= chung;
    c.tu *= c.tu;
    c.mau*=c.mau;
    ll check = c.mau / abs(c.mau);
    c.mau = abs(c.mau);
    c.tu *= check;
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    chung = gcd((d.tu), (d.mau));
    d.tu /= chung;
    d.mau /= chung;
    check = d.mau / abs(d.mau);
    d.mau = abs(d.mau);
    d.tu *= check;
    cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << endl;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}