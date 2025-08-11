#include <bits/stdc++.h>
using namespace std;
#define ll long long

string d1 = "A B B A D C C A B D C C A B D";
string d2 = "A C C A B C D D B B C D D B B";

void solve()
{
    int ma, len = d1.size(); cin >> ma;
    double cnt = 15;
    string de, dapan;

    cin.ignore();
    getline(cin, dapan);

    if(ma == 101)
        de = d1;
    else de = d2;
    for(int i = 0; i< len ; i++)
        if(dapan[i] != de[i])
            cnt--;
    cout << fixed << setprecision(2) << cnt * 10 / 15 << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin>>t;
    while(t--)
        solve();
    return 0;
}