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

const ull v[6] = {1, 5, 10, 50, 100, 500};

int main() {
    vector<ull> C(6);
    vector<ull> use(6);
    ull A;
    rep(i, 6)cin >> C[i];
    cin >> A;

    ull ans = 0;
    // use data = 3 2 1 3 0 2 620

    for (int i = 5; i >= 0; i--) {
        ull t = min(A / v[i], C[i]);
        use[i] = t;
        A -= t * v[i];
        ans += t;
    }
    if (A == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    cout << ans << endl;

    rep(i, 6)printf("%lld, ", use[i]);
    
    cout << endl;
    return 0;
}