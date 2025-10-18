//Chưa rõ

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Fenwick {
    int n;
    vector<int> bit;
    Fenwick(int n=0): n(n), bit(n+1,0) {}
    void add(int idx, int val){
        for(; idx<=n; idx += idx&-idx) bit[idx] += val;
    }
    int sumPrefix(int idx){
        int s = 0;
        for(; idx>0; idx -= idx&-idx) s += bit[idx];
        return s;
    }
    int rangeSum(int l, int r){
        if(r < l) return 0;
        return sumPrefix(r) - sumPrefix(l-1);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    int K;
    if(!(cin >> N >> M >> K)) return 0;

    // min obstacle row for each column (1..M), init to N+1 (no obstacle)
    vector<int> minRow(M+1, N+1);
    // min obstacle col for each row (1..N), init to M+1
    vector<int> minCol(N+1, M+1);

    vector<pair<int,int>> obs;
    obs.reserve(K);
    for(int i=0;i<K;i++){
        int x,y; cin >> x >> y;
        obs.emplace_back(x,y);
        if(x >=1 && x <= N && y >=1 && y <= M){
            minRow[y] = min(minRow[y], x);
            minCol[x] = min(minCol[x], y);
        }
    }

    // downLimit[y] = largest row index we can occupy in column y starting from row 1 (before first obstacle)
    vector<int> downLimit(M+1);
    for(int y=1;y<=M;y++){
        downLimit[y] = minRow[y] - 1; // if no obstacle => N
        if(downLimit[y] > N) downLimit[y] = N;
        if(downLimit[y] < 0) downLimit[y] = 0;
    }
    // rightLimit[x] = largest column index we can occupy in row x starting from col 1 (before first obstacle)
    vector<int> rightLimit(N+1);
    for(int x=1;x<=N;x++){
        rightLimit[x] = minCol[x] - 1;
        if(rightLimit[x] > M) rightLimit[x] = M;
        if(rightLimit[x] < 0) rightLimit[x] = 0;
    }

    // limCol = how far we can go on row 1 (one step to the right)
    int limCol = rightLimit[1];
    // limRow = how far we can go on column 1 (one step down)
    int limRow = downLimit[1];

    // If limCol or limRow equals 0, handle gracefully (no reachable via that direction)
    // total1 = sum_{y=1..limCol} downLimit[y]
    ll total1 = 0;
    for(int y=1;y<=limCol;y++) total1 += downLimit[y];

    // total2 = sum_{x=1..limRow} rightLimit[x]
    ll total2 = 0;
    for(int x=1;x<=limRow;x++) total2 += rightLimit[x];

    // Prepare buckets: for each t (0..N), list of columns y such that downLimit[y] == t
    vector<vector<int>> bucket(N+1);
    for(int y=1;y<=limCol;y++){
        int t = downLimit[y];
        if(t >= 0 && t <= N) bucket[t].push_back(y);
    }

    // Fenwick over columns 1..limCol indicating which columns currently satisfy downLimit[y] >= current x
    Fenwick fw(max(1, limCol));
    // initially for x=1, add all y with downLimit[y] >= 1
    for(int y=1;y<=limCol;y++){
        if(downLimit[y] >= 1) fw.add(y, 1);
    }

    // overlap count
    ll overlap = 0;
    // iterate x from 1..limRow
    for(int x=1;x<=limRow;x++){
        int r = min(limCol, rightLimit[x]);
        if(r >= 1){
            int cnt = fw.rangeSum(1, r);
            overlap += cnt;
        }
        // After processing x, remove columns y with downLimit[y] == x
        if(x <= N){
            for(int y : bucket[x]){
                // y is within 1..limCol by construction
                fw.add(y, -1);
            }
        }
    }

    ll ans = total1 + total2 - overlap;
    cout << ans << "\n";
    return 0;
}
