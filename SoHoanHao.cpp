#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

vector<ll> perfectNum = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};
unordered_set<ll> s(perfectNum.begin(), perfectNum.end());
void solve()
{
	ll n;	cin >> n;
	if(s.count(n))
		cout << "1\n";
	else cout << "0\n";
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;	cin >> t;
	while(t--)
		solve();
	return 0;
}