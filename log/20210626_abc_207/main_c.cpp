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
    vector<ull> t(N);
    vector<ull> l(N);
    vector<ull> r(N);
    rep(i, N)cin >> t[i] >> l[i] >> r[i];

    ull sum = 0;
    for (int i = 0; i < N; i++) {

        for (int j = i + 1; j < N; j++) {
            ull t1 = t[i];
            ull l1 = l[i];
            ull r1 = r[i];
            ull t2 = t[j];
            ull l2 = l[j];
            ull r2 = r[j];
            if (l1 > l2) {
                auto t3 = t2;
                auto l3 = l2;
                auto r3 = r2;
                t2 = t1;
                l2 = l1;
                r2 = r1;
                t1 = t3;
                l1 = l3;
                r1 = r3;
            }
            if ((t1 == 1 || t1 == 3) && (t2 == 1 || t2 == 2)) {
                if (l2 <= r1) {
                    sum++;
                }
            } else {
                if (l2 < r1) {
                    sum++;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}