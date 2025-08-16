#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        unordered_set<ll> st;
        for(int i = 0; i< n -1; i++)
        {
            int tmp; cin >> tmp;
            st.insert(tmp);
        }
        int res = 1;
        while(st.count(res))
            res++;
        cout << res << endl;
    }
}
