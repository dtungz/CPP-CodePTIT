#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fib[93];
void ktao()
{
    for(int i = 0; i<= 92; i++)
    {
        if(i <= 1)
            fib[i] = i;
        else
            fib[i] = fib[i-1] + fib[i-2];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ktao();
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;   cout << fib[n] << endl;
    }
    return 0;
}