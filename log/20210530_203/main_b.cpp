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
    ull N, K;
    cin >> N >> K;

    ull sum = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            sum += i * 100 + j;
        }
    }
    printf("%lld\n", sum);
    return 0;
}
//for (int i = 1; i <= N; i++) {
//for (int j = 1; j <= K; j++) {
//sum += i * 100 + j;
//}
//}