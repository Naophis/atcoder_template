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
    ull L, R;
    cin >> L >> R;
    ull n = 0;
    for (ull x = 2; x <= R; x++) {
        for (ull y = L; y <= R; y++) {
            auto g = gcd(x, y);
            if (g != 1 && x != g && y != g) {
                n++;
            }
        }
    }
    cout << n << endl;
    return 0;
}