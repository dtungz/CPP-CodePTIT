#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    int row = 0, col = 0;
    bool moveUp = true;
    
    for (int i = 0; i < n * m; i++) {
        cout << a[row][col] << " ";
        
        if (moveUp) {
            if (col == m - 1) {
                row++;
                moveUp = !moveUp;
            } else if (row == 0) {
                col++;
                moveUp = !moveUp;
            } else {
                row--;
                col++;
            }
        } else {
            if (row == n - 1) {
                col++;
                moveUp = !moveUp;
            } else if (col == 0) {
                row++;
                moveUp = !moveUp;
            } else {
                row++;
                col--;
            }
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}