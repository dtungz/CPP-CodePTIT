#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' )
        return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;   cin >> s;
    int n = s.size();
    for(int i = 0; i< n; i++)
    {
        s[i] = tolower(s[i]);
        if(check(s[i]))
            cout <<"."<<s[i];
    }
       
}