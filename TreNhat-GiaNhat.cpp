#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

struct person
{
	int ngay, thang, nam;
	string name;
};

bool cmp(person a, person b)
{
	if(a.nam != b.nam)
		return a.nam < b.nam;
	if(a.thang != b.thang)
		return a.thang < b.thang;
	return a.ngay < b.ngay;
}

int main()
{
	//ios_base :: sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);
	int n;	cin >> n;
	person data[n];
	for(int i = 0; i < n ; i++)
	{
		cin >> data[i].name;
		int d, m, y;
		scanf("%d/%d/%d",&d, &m, &y);
		data[i].ngay = d;	data[i].thang = m;	data[i].nam = y;
	}
	sort(data, data + n, cmp);
	cout << data[n-1].name << "\n" << data[0].name;
	//cout << data[0].ngay << " " << data[0].thang << " " <<  data[0].nam << "\n";
	//cout << data[n-1].ngay << " " << data[n-1].thang << " " <<  data[n-1].nam << "\n";
	return 0;
}