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
    ll N, K;
    cin >> N >> K;
    vector<pair<ll, ll>> A(N);
    ll a, b;
    unordered_map<ull, ull> hm;
    rep(i, N) {
        cin >> a >> b;
        A[i] = make_pair(a, b);
    }
    sort(A.begin(), A.end());
    vector<ll> key;
    rep(i, N) {
        if (hm[A[i].first] == 0) {
            key.push_back(A[i].first);
        }
        hm[A[i].first] += A[i].second;
    }
    ll i = 0;
    ll dist_hist = 0;
    for (auto f_i :key) {
        if ((K - (f_i - dist_hist)) >= 0) {//到達可能か
            K = K - (f_i - dist_hist) + hm[f_i];
            i = f_i;
            dist_hist = f_i;
        } else {
            i += K;//ダメなら１歩手前でbreak
            cout << i << endl;
            return 0;
        }
        if (K <= 0)break;
    }
    if (K > 0) {
        i += K;
    }

    cout << i << endl;

    return 0;
}