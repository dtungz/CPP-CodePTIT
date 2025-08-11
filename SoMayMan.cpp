#include <bits/stdc++.h>
using namespace std;
#define ll long long

int LuckyNum(string s)
{
    reverse(s.begin(),s.end());
    return (s.find("68") == 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    while(t--) 
    {
        string s;   cin >> s;
        cout << LuckyNum(s) << endl;
    }
}