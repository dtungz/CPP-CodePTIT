#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;  cin >> n;
    set<int> st;
    for(int i = 0; i< n ; i++)
    {
        int tmp;    cin >> tmp;
        st.insert(tmp);
    }   
    for(auto it : st)
        cout << it << " ";
}