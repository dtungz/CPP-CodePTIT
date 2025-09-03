#include <bits/stdc++.h>
using namespace std;
#define ll long long

void in(int a[205][205], int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int dy1[] = {-1, 0, 1, 0};
int dx1[] = {0, 1, 0, -1};

int dy2[] = {1, 0, -1, 0};
int dx2[] = {0, -1, 0, 1};

void solve()
{
    int n;  cin >> n;
    int m = 4 * n;
    int a[205][205];
    int idx = 1;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= m; j++)
            a[i][j] = idx++;
    //task 1
    int step = 2;
    int ln1 = m * m / 2;
    int c1 = 2 * n, h1 = 2 * n + 1;
    cout << a[h1][c1] << " ";
    ln1--;
    while(ln1 > 0)
    {
        for(int d = 0; d < 4 && ln1 > 0; d++)
        {
            for(int cnt = 0; cnt < step && ln1 > 0; cnt++)
            {
                h1 += dy1[d];
                c1 += dx1[d];
                cout << a[h1][c1] << " ";
                ln1--;
            }
            if(d % 2 == 1) step+=2;
        }
    }
    cout << endl;
    int ln2 = m*m /2;
    int c2 = 2 * n + 1, h2 = 2 * n;
    step = 2;
    cout << a[h2][c2] << ' ';
    ln2 --;
    while(ln2 > 0)
    {
        for(int d = 0; d < 4 && ln2 > 0; d++)
        {
            for(int cnt = 0; cnt < step && ln2 > 0; cnt++)
            {
                h2 += dy2[d];
                c2 += dx2[d];
                cout << a[h2][c2] << " ";
                ln2--;  
            }
            if(d % 2 == 1) step+=2;
        }
    }
    cout << endl;
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