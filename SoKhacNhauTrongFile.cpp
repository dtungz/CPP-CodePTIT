#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("DATA.in", "r", stdin);
	map<int,int> mp;
	int n;
	while(cin >> n)
		mp[n]++;
	for(auto [fi, se] : mp)
		cout << fi << " " << se << endl;
		
	return 0;
}