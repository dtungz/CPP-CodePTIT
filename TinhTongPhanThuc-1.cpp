#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    double ans = 0;
    for(double i = 1; i<= n; i++)
        ans = ans + 1/i;
    cout << fixed << setprecision(4) << ans << endl;
    return 0;
}