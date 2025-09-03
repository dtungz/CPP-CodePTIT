#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
	string s;
	cin >> s;
	string res = "";
	int ans = 0;
	for(char c : s)
	{
		res.push_back(c);
		int len = res.size();
		if(len >= 3 && res[len-3] == '1' && res[len-2] == '0' && res[len-1] == '0')
		{
			ans += 3;
			res.pop_back();
			res.pop_back();
			res.pop_back();
		}
	}
	cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}