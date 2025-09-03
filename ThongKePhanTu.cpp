#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXLIST = 10000;

typedef struct list
{ 
    int n; 
    int nodes[MAXLIST];            
} List;

List ds;
int k = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    map<int, int> mp;
    int tmp;
    while(cin >> tmp)
    {
        ds.nodes[k++] = tmp;
        mp[tmp]++;
        ds.n = k;
    }
    for(int i = 0; i < ds.n; i++)
    {
        if(mp[ds.nodes[i]] > 0)
        {
            cout << ds.nodes[i] << " " << mp[ds.nodes[i]];
            mp[ds.nodes[i]] = 0;
            cout << endl;
        }
    }
}