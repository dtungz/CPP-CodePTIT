#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)


void solve()
{
	int n, k;	cin >> n >> k;
	unordered_set<int> st;
	vector<int> v;
	for(int i = 0; i < n; i++)
	{
		int tmp;	cin >> tmp;
		//if(!st.count(tmp))
		{
			v.push_back(tmp);
			//st.insert(tmp);
		}
	}
	sort(v.begin(), v.end());
	cout << v[k - 1] << endl;
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