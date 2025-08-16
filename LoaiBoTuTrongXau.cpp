#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s, temp;
    getline(cin, s);
    cin >> temp;
    stringstream ss(s);
    string word;
    while(ss >> word)
        if(word != temp)
            cout << word << " ";   
}