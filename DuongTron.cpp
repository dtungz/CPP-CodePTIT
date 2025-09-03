#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)
//bài D chung kết ICPC 2024

const ll scale = 10000;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long double x, y, r; cin >> x >> y >> r;
    ll xs = (llround)(x * scale), ys = (llround)(y * scale), rs = (llround)(r * scale);
    ll rsq = rs * rs;

    ll x_left = ceil(x - r);
    ll x_right = floor(x + r);

    ll ans = 0;
    for(int i = x_left; i <= x_right; i++)
    {
        ll dx = i * scale - xs;
        ll dx2 = dx * dx;
        if(dx2 > rsq)
            continue;
        long double lenY = sqrt((long double)(rsq - dx2));
        //Tim ymin va ymax
        ll ymin = (ll)ceil((ys - lenY)/scale);
        ll ymax = (ll)floor((ys + lenY)/scale);
        if(ymin <= ymax) ans += (ymax - ymin + 1);
    }
    cout << ans << endl;
    return 0;
}