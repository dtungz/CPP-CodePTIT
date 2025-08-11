#include <bits/stdc++.h>
using namespace std;
#define ll long long

int RutGon(int n)
{
    if(n < 10)
        return n;
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n/=10;
    }
    return RutGon(sum);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        cout << RutGon(n) << endl;
    }   
    return 0;
}