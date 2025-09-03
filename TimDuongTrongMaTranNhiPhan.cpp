#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

struct Point{int x, y;};
struct Node{Point point; int dist;};

int n, m;

bool isValid(int row, int col)
{
	return (row >= 0 && row < n && col >= 0 && col < m);
}

int arr[1005][1005] = {0};
int solve()
{
	int x, y, z, t;
	memset(arr, 0, sizeof(arr));
	cin >> n >> m >> x >> y >> z >> t;
	FOR(i, 0, n - 1) FOR(j, 0, m - 1) cin >> arr[i][j];
	if(arr[x][y] == 0 || arr[z][t] == 0)
		return -1;
	Point src = {x, y};
	Point dest = {z, t};
	bool visited[1005][1005];
	memset(visited, false, sizeof(visited));
	queue<Node> q;
	visited[x][y];
	q.push({src, 0});
	while(!q.empty())
	{
		auto [cur, step] = q.front();
		q.pop();
		for(int i = 0; i < 4; i++)
		{
			int i1 = cur.x + dy[i];
			int j1 = cur.y + dx[i];
			if(!isValid(i1, j1) || arr[i1][j1] == 0)
				continue;
			if(i1 == z && j1 == t)
				return step + 1;
			Point newP = {i1, j1};
			if(visited[i1][j1] == false)
			{
				visited[i1][j1] = true;
				q.push({newP, step + 1});
			}
		}
	}
	return -1;
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T;	cin >> T;
	while(T--)
		cout << solve() << endl;
	return 0;
}