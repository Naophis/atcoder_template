#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
using ull = unsigned long long;

/* REP macro */
#define reps(i, a, n) for (ull i = (a); i < (ull)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i, n) for (ll i = n - 1; i >= 0; i--)
#define rrepd(i, n) for (ll i = n; i >= 1; i--)

int main() {
    ll N;
    cin >> N;
    vector<pair<double, double>> vp_t;
    vector<pair<double, double>> vp_s;
    double a, b;
    rep (i, N) {
        cin >> a >> b;
        vp_t.push_back(make_pair(a, b));
    }
    double c, d;
    rep (i, N) {
        cin >> c >> d;
        vp_s.push_back(make_pair(c, d));
    }
    double a1 = vp_t[0].first;
    double a2 = vp_t[1].first;
    double b1 = vp_t[0].second;
    double b2 = vp_t[1].second;
    double a1_ = vp_s[0].first;
    double a2_ = vp_s[1].first;
    double b1_ = vp_s[0].second;
    double b2_ = vp_s[1].second;
    double down = (pow(a1 - a2, 2) + pow(b1 - b2, 2));
    if (down == 0) {
        cout << "No" << endl;
        return 0;
    }
    double up = (b1_ - b2_) * (a1 - a2) - (a1_ - a2_) * (b1 - b2);
    double sita = asin(up / down);

    double q = a1_ - a1 * cos(sita) + b1 * sin(sita);
    double r = b1_ - a1 * sin(sita) - b1 * cos(sita);

    for (int i = 0; i < N; i++) {
        double a = vp_t[i].first;
        double b = vp_t[i].second;
        double a_ = vp_s[i].first;
        double b_ = vp_s[i].second;
        double a3 = a * cos(sita) - b * sin(sita) + q;
        double b3 = a * sin(sita) + b * cos(sita) + r;
        if (a3 != a_ || b3 != b_) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}