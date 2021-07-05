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

int judge(vector<ll> &A, vector<ll> &B, ll i, ll j, ll ans) {
    if ((i >= A.size() || j >= A.size())//
        || (i >= B.size() || j >= B.size())) {
        return ans;
    }
    if (A[i] == A[j]) {
        return ans + 1;
    }
    if (A[i] == B[j]) {
        return ans + 1;
    }
    return ans;
}

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A;
    vector<ll> B;

    ll tmp_a, tmp_b;
    rep(i, M) {
        cin >> tmp_a >> tmp_b;
        A.push_back(tmp_a);
        B.push_back(tmp_b);
    }

    rep(i, M) {
        A[i];
        B[i];
    }

    ll cnt = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cnt += judge(A, B, i, j, 0);
        }
    }
    if (cnt == 0)cnt = N;

    cout << cnt << endl;
    return 0;
}