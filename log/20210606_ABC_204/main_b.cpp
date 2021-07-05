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
    vector<ll> A(N);
    rep(i, N)cin >> A[i];

    ull sum = 0;
    rep(i, N) {
        if (A[i] >= 10)
            sum += (A[i] - 10);
    }
    cout << sum << endl;
    return 0;
}