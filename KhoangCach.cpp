#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    while(t--)
    {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << fixed << setprecision(4) << sqrt(pow(a - c, 2) + pow(b - d, 2)) << endl;
    }
}