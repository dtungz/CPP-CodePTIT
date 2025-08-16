#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    unordered_map<string, int> mp;
    int n;  cin >> n;
    cin.ignore();
    for(int i = 0;i < n; i++)
    {
        string s;
        getline(cin, s);
        mp[s]++;
    }   
    cout << mp.size();
}