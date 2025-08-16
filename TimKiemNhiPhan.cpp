#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        unordered_set<int>s;
        int n, X;   cin >> n >> X;
        for(int i = 0; i< n; i++)
        {
            int tmp;    cin >> tmp;
            s.insert(tmp);
        }
        if(s.count(X))
            cout << 1 << "\n";
        else cout << - 1 << endl;
    }
}
