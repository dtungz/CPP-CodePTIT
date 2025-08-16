#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll limit =10000;
ll sang[limit + 1] = {0};

void ktao(){
    sang[0] = 0;
    sang[1] = 1;
    for(int i = 2; i *i  <= limit + 1; i++)
        if(sang[i] == 0)
            for(int j = i * i; j <= limit; j += i)
                if(sang[j] == 0)
                    sang[j] = i;
    for(int i = 2; i <= limit; i++)
        if(sang[i] == 0)
            sang[i] = i;
}

void solve()
{
    int n;  cin >> n;
    for(int i = 1; i<= n; i++)
        cout << sang[i] << " ";
    cout << endl;
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