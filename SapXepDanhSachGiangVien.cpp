#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int pos = 1;

class gv
{
	public:
		string hten, mhoc, ma;
		friend istream& operator >> (istream& in, gv &x)
		{
			x.ma = "GV";
			if(pos < 10) x.ma += "0";
			x.ma += to_string(pos++);
			getline(in, x.hten);
			getline(in, x.mhoc);
			return in;
		}
		void fixmon()
		{
			string temp = "", word;
			stringstream ss(mhoc);
			while(ss >> word)
				temp += toupper(word[0]);
			mhoc = temp;
		}
		string getname()
		{
			string temp = hten;
			string word, ans = "";
			stringstream ss(temp);
			while(ss >> word)
				ans = word;
			return ans;
		}
		friend ostream& operator << (ostream& out, gv x)
		{
			x.fixmon();
			cout << x.ma << " " << x.hten << " " << x.mhoc << endl;
			return out;
		}
};

bool cmp(gv a, gv b)
{
	if(a.getname() != b.getname())
		return a.getname() < b.getname();
	return a.ma < b.ma;

}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;	cin >> n;
	cin.ignore();
	gv a[n];
	for(int i = 0; i < n ; i++)
			cin >> a[i];
	sort(a, a + n, cmp);
	for(int i = 0; i < n ; i++)
		cout << a[i];
	return 0;
}