#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    getline(cin, s);
    for(char &it : s)
        it = tolower(it);
    vector<string> v;
    stringstream ss(s);
    string word;
    while(ss >> word)
        v.push_back(word);   
    string ans = "";
    for(int i = 0; i < v.size()-1; i++)
    {
        if(i > 0)
            ans += " ";
        v[i][0] = toupper(v[i][0]);
        ans+=v[i];
    }
    string name = v[v.size() - 1];
    for(int i = 0; i < name.size(); i++)
        name[i] = toupper(name[i]);
    ans += ", " + name;
    cout << ans;
}