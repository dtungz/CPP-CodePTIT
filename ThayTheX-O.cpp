#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int n,  m; 

vector<vector<bool>> visited(25, vector<bool>(25 , false));
vector<vector<char>> a(25, vector<char>(25));

void dfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    while(!q.empty())
    {
        auto [row, col] = q.front();
        q.pop();
        visited[row][col] = true;
        for(int k = 0; k < 4; k++)
        {
            int i1 = row + dy[k];
            int j1 = col + dx[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && visited[i1][j1] == false && a[i1][j1] == 'O')
                q.push({i1, j1});
        }
    }
}

void reset()
{
    FOR(i, 1, 24)
        FOR(j, 1, 24)
        {
            visited[i][j] = false;
            a[i][j] = 'X';
        }
}

void solve()
{
    //memset(visited, false, sizeof(visited));
    //memset(a, '0', sizeof(a));
    reset();
    cin >> n >> m;
    FOR(i, 1, n)    FOR(j, 1, m)    cin >> a[i][j];
    FOR(i, 1, n)
    {
        if(a[i][1] == 'O')
            dfs(i, 1);
        if(a[i][m] == 'O')
            dfs(i, m);
    }
    FOR(i, 1, m)
    {
        if(a[1][i] == 'O')
            dfs(1, i);
        if(a[n][i] == 'O')
            dfs(n, i);
    }
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            if(visited[i][j] == false || a[i][j] == 'X')
                cout << 'X' << " ";
            else cout << 'O' << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;    cin >> t;
    while(t--)
        solve();
    return 0;
}