#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calcHorizontal(vector<pair<ll,ll>> a) {
    int n = a.size();
    sort(a.begin(), a.end()); // sắp theo X
    vector<ll> X(n), Y(n);
    for (int i = 0; i < n; i++) {
        X[i] = a[i].first - i; // X[i] - i để xử lý dãy liên tiếp
        Y[i] = a[i].second;
    }
    // median(X - i)
    nth_element(X.begin(), X.begin() + n/2, X.end());
    ll medX = X[n/2];
    nth_element(Y.begin(), Y.begin() + n/2, Y.end());
    ll medY = Y[n/2];

    ll cost = 0;
    for (int i = 0; i < n; i++) {
        cost += llabs(X[i] - medX) + llabs(Y[i] - medY);
    }
    return cost;
}

ll calcVertical(vector<pair<ll,ll>> a) {
    int n = a.size();
    sort(a.begin(), a.end(), [](auto &p1, auto &p2){
        return p1.second < p2.second;
    });
    vector<ll> X(n), Y(n);
    for (int i = 0; i < n; i++) {
        X[i] = a[i].first;
        Y[i] = a[i].second - i;
    }
    nth_element(X.begin(), X.begin() + n/2, X.end());
    ll medX = X[n/2];
    nth_element(Y.begin(), Y.begin() + n/2, Y.end());
    ll medY = Y[n/2];

    ll cost = 0;
    for (int i = 0; i < n; i++) {
        cost += llabs(X[i] - medX) + llabs(Y[i] - medY);
    }
    return cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<pair<ll,ll>> a(N);
    for (int i = 0; i < N; i++) cin >> a[i].first >> a[i].second;

    ll ans = min(calcHorizontal(a), calcVertical(a));
    cout << ans << "\n";
}
