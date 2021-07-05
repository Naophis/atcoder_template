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
    ull A, B, C;
    cin >> A >> B >> C;
    ull a = A * A;
    ull b = B * B;
    ull c = C * C;
    if (a + b < c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}