#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n)
{
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return n > 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;  cin >> n;
    if(isPrime(n))
        cout << "YES";
    else cout << "NO";
    return 0;
}