#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const double INF = 1e50;
struct Event {
    double t;
    ll delta;
    int type; // 0 = start (+) processed before end at same t, 1 = end (-)
    Event(double _t=0, ll _d=0, int _ty=0): t(_t), delta(_d), type(_ty) {}
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    double A;
    if(!(cin >> N >> A)) return 0;
    vector<ll> W(N);
    vector<double> X(N), V(N);
    for(int i=0;i<N;i++){
        long long wi; long long xi, vi;
        cin >> wi >> xi >> vi;
        W[i] = wi; X[i] = (double)xi; V[i] = (double)vi;
    }

    ll answer = 0;

    for(int i=0;i<N;i++){
        vector<Event> ev;
        ev.reserve(2*N + 4);
        // For each j, compute interval of t where 0 <= D + Vd * t <= A
        for(int j=0;j<N;j++){
            double D = X[j] - X[i];
            double Vd = V[j] - V[i];
            if (fabs(Vd) < 1e-12) {
                // relative speed zero
                if (0.0 <= D + 1e-12 && D <= A + 1e-12) {
                    // always inside for all t >= 0
                    ev.emplace_back(0.0, (ll)W[j], 0);
                    ev.emplace_back(INF, -(ll)W[j], 1);
                }
                // else never inside
            } else {
                double t1 = (-D) / Vd;
                double t2 = (A - D) / Vd;
                double l = min(t1, t2);
                double r = max(t1, t2);
                if (r < 0.0) continue; // whole interval before t=0
                double start = max(0.0, l);
                double end = r;
                // Only add if non-empty interval (allow single-point intervals)
                if (end >= start - 1e-15) {
                    ev.emplace_back(start, (ll)W[j], 0);
                    ev.emplace_back(end, -(ll)W[j], 1);
                }
            }
        }
        if(ev.empty()) continue;
        sort(ev.begin(), ev.end(), [](const Event &a, const Event &b){
            if (fabs(a.t - b.t) > 1e-12) return a.t < b.t;
            return a.type < b.type; // start (0) before end (1)
        });

        ll cur = 0;
        for(auto &e : ev){
            cur += e.delta;
            if (cur > answer) answer = cur;
        }
    }

    cout << answer << '\n';
    return 0;
}
