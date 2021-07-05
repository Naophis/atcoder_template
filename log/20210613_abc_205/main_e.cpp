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
ll dp[20001][10001];
const int MOD = 1000000007;

int main() {
    ll N, M, K;
    cin >> N >> M >> K;
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for (int i = 0; i < N; i++) {
        ll bi = (i - K) >= 0 ? i - K : 0;
        for (int j = 0; j < M; j++) {
            dp[i + 1][j] += dp[i][j] %= MOD;
            if (j >= bi) {
                dp[i + 1][j] += dp[i][j] %= MOD;
            }
        }
    }
    cout << dp[N][N + M] << endl;
    return 0;
}