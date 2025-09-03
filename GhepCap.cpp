#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e6 + 1;
vector<int> uoc(limit, 0);

void ktao()
{
    for(int i = 1; i< limit; i++)
        for(int j = i; j < limit; j += i)
            uoc[j]++;
}


void solve()
{
    int n;  cin >> n;
    cout << uoc[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin>>t;
    ktao();
    while(t--)
        solve();
    return 0;
}