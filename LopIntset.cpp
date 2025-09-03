#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DATA.in", "r", stdin);
    unordered_set<int> temp;
    set<int> ans;
    int n, m;   cin >> n >> m;
    for(int i = 0;i < n; i++)
    {
        int tmp;    cin >> tmp;
        temp.insert(tmp);
    }   
    for(int i = 0;i < m; i++)
    {
        int tmp;    cin >> tmp;
        if(temp.count(tmp))
            ans.insert(tmp);
    }
    for(int it : ans)
        cout << it << " ";
}