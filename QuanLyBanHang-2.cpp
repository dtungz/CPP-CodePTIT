#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FOL(i, a, b) for(ll i = a; i >= b; i--)
#define FOE(it, a) for(ll& it : a)

class KH
{
public:
	string mkh, tkh,gt, ns ,dc;
	KH()
	{
		mkh = "KH";
		tkh = gt = ns = dc = "";
	}
	KH(string ma, string ten, string gtinh, string nsinh, string dchi)
	{
		mkh = ma; tkh = ten; gt = gtinh; ns = nsinh; dc = dchi;
	}
};

class MH
{
public:
	string mmh, tmh, dv;
	ll gm, gb;
	MH()
	{
		mmh = "MH";
		tmh = dv = "";
		gm = gb = 0;
	}
	MH(string mmh, string tmh, string dv, ll gm, ll gb)
	{
		this->mmh = mmh;
		this-> tmh = tmh;
		this-> dv = dv;
		this-> gm = gm;
		this-> gb = gb;
	}
};

KH kh[35];
MH mh[55];
ll a = 0, b = 0, c = 0;

class KhachHang
{
public:
	string mkh, tkh, gt, ns, dc;
	friend istream& operator >> (istream& in, KhachHang& x)
	{
		//if(a == 0)	cin.ignore();
		a++;
		x.mkh = "KH" + string(3 - to_string(a).size(), '0') + to_string(a);

		in >> ws; // Them Vao

		getline(in, x.tkh);
		getline(in, x.gt);
		getline(in, x.ns);
		getline(in, x.dc);
		kh[a - 1] = KH(x.mkh, x.tkh, x.gt, x.ns, x.dc);
		return in;
	}
	friend ostream& operator << (ostream& out, KhachHang x)
	{
		out << x.tkh << " " << x.dc << " ";
		return out; 
	}
};

class MatHang
{
public:
	string mmh, tmh, dv;
	ll gm, gb;
	friend istream& operator >> (istream& in, MatHang& x)
	{
		b++;
		x.mmh = "MH" + string(3 - to_string(b).size(), '0') + to_string(b);
		//in.ignore();

		in >> ws; // Them Vao

		getline(in, x.tmh);
		getline(in, x.dv);
		in >> x.gm >> x.gb;
		mh[b-1] = MH(x.mmh, x.tmh, x.dv, x.gm, x.gb);
		return in;
	}
	friend ostream& operator << (ostream& out, MatHang x)
	{
		out << x.tmh << " " << x.dv << " " << x.gm << " " << x.gb << " ";
		return out;
	}
};

class HoaDon
{
public:
	string mhd, mkh, mmh;
	ll sl, lnh;
	friend istream& operator >> (istream& in, HoaDon& x)
	{
		c++;
		x.mhd = "HD" + string(3 - to_string(c).size(), '0') + to_string(c);
		in >> x.mkh >> x.mmh >> x.sl;
		for(ll i = 0; i < b; i++)
		{
			if(mh[i].mmh == x.mmh)
			{
				x.lnh = x.sl * mh[i].gb - x.sl * mh[i].gm;
				break;
			}
		}
		return in;
	}
	friend ostream& operator << (ostream &out, HoaDon x)
	{
		out << x.mhd << " ";
		for(ll i = 0; i < a; i++)
		{
			if(kh[i].mkh == x.mkh)
			{
				out << kh[i].tkh << " " << kh[i].dc << " ";
				break;
			}
		}
		for(ll i = 0; i < b; i++)
		{
			if(mh[i].mmh == x.mmh)
			{
				out << mh[i].tmh << " " << x.sl << " "  << x.sl * mh[i].gb << " " << x.lnh << endl;
				break;
			}
		}
		return out;
	}
};

bool cmp(HoaDon a, HoaDon b)
{
	return a.lnh >= b.lnh;
}

void sapxep(HoaDon ds[], ll n)
{
	sort(ds, ds + n, cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    ll N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}