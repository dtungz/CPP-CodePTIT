#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n)
{
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)   return false;
    return n > 1;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        for(int i = a; i<= b; i++)
            if(isPrime(i))
                cout << i << " ";
        cout << endl;
    }
}