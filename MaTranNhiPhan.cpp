#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;  cin >> n;
    int cnt = 0;
    for(int i = 0 ; i< n; i++)
    {
        int temp = 0;
        for(int j = 0; j< 3; j++)
        {
            int val;    cin >> val;
            if(val == 1)
            {
                temp++;
                if(temp == 2)
                    cnt++;
            }
        }
    }
    cout << cnt;   
}