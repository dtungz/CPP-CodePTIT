#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int m, s;
    cin >> m >> s;
    if(9 * m < s || s < 1)
    {
        cout << "-1 -1";
        return 0;
    }
    string ans1 = "", ans2 = "";
    vector<int> ma;
    int temp = s;
    while(temp >= 9)
    {
        ma.push_back(9);
        temp-=9;
    }   
    if(temp > 0)
        ma.push_back(temp);
    while(ma.size() < m)
        ma.push_back(0);
    for(int i = 0; i< m; i++)
        ans2.push_back(ma[i] + '0');
    
    reverse(ma.begin(), ma.end());
    int idx = 0;
    while(ma[idx] == 0)
        idx++;
    ma[0] += 1;
    ma[idx]-=1;
    for(int i = 0; i< m; i++)
        ans1.push_back(ma[i] + '0');
    cout << ans1 << " " << ans2;
}