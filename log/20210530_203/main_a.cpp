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
    ull N = 3;
    vector<ull> v(3);
    rep(i, N) {
        cin >> v[i];
    }

    ull out = 0;
    if (v[0] == v[1]) {
        out = v[2];
    } else if (v[1] == v[2]) {
        out = v[0];
    } else if (v[2] == v[0]) {
        out = v[1];
    }
    printf("%lld\n", out);
    return 0;
}