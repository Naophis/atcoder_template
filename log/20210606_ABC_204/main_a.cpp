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
    ll x, y;
    cin >> x >> y;

    if (x == y) {
        cout << x << endl;
    } else if ((x == 0 && y == 1) || (x == 1 && y == 0)) {
        cout << 2 << endl;
    } else if ((x == 0 && y == 2) || (x == 2 && y == 0)) {
        cout << 1 << endl;
    } else if ((x == 1 && y == 2) || (x == 2 && y == 1)) {
        cout << 0 << endl;
    }

    return 0;
}