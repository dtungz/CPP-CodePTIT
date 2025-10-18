#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int N, M;
int Cx, Cy, Dx, Dy;
vector<string> grid;
vector<vector<int>> dist;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    cin >> Cx >> Cy >> Dx >> Dy;
    Cx--, Cy--, Dx--, Dy--; // chuyển về 0-based

    grid.resize(N);
    for (int i = 0; i < N; i++) cin >> grid[i];

    dist.assign(N, vector<int>(M, INF));
    deque<pair<int,int>> dq;

    dist[Cx][Cy] = 0;
    dq.push_back({Cx, Cy});

    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};

    while (!dq.empty()) {
        auto [x,y] = dq.front(); dq.pop_front();
        int d = dist[x][y];
        if (x == Dx && y == Dy) {
            cout << d << "\n";
            return 0;
        }

        // di chuyển thường (chi phí 1)
        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx<0||nx>=N||ny<0||ny>=M) continue;
            if (grid[nx][ny] == '#') continue;
            if (dist[nx][ny] > d + 1) {
                dist[nx][ny] = d + 1;
                dq.push_back({nx, ny});
            }
        }

        // phép thuật (chi phí 2)
        for (int i = -2; i <= 2; i++) {
            for (int j = -2; j <= 2; j++) {
                int nx = x + i, ny = y + j;
                if (nx<0||nx>=N||ny<0||ny>=M) continue;
                if (grid[nx][ny] == '#') continue;
                if (dist[nx][ny] > d + 2) {
                    dist[nx][ny] = d + 2;
                    dq.push_back({nx, ny});
                }
            }
        }
    }

    cout << -1 << "\n";
}
