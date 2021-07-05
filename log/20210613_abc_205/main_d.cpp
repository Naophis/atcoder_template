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

int binary_search_idx(ll key, vector<ull> &Q, vector<ull> &A) {
    ll left = 0, right = (ll) Q.size() - 1; // 配列 a の左端と右端
    while (right >= left) {
        ll mid = left + (right - left) / 2; // 区間の真ん中
        if (Q[mid] == key) return mid;
        else if (Q[mid] > key) right = mid - 1;
        else if (Q[mid] < key) left = mid + 1;
    }
    return -1;
}

int main() {
    ll N, Q;
    cin >> N >> Q;
    vector<ull> A(N);
    vector<ull> K(Q);
    vector<ull> A_diff_sum(N + 1);

    A_diff_sum[0] = 0;
    rep(i, N) {
        cin >> A[i];
        if (i > 0)
            A_diff_sum[i] = A_diff_sum[i - 1] +
                            (A[i] - A[i - 1]) - 1;
        else
            A_diff_sum[i] = A[i] - 1;
    }
    A_diff_sum[N] = LLONG_MAX; //最後に最大値を入れておく

    rep(i, Q)cin >> K[i];

    rep(i, Q) {
        ll idx = binary_search_idx(K[i], A_diff_sum, A);
        printf("\t%ld, %ld\n", A[idx], idx);
        cout << A[idx] - (K[i] - 1) << endl;
    }
//    cout << binary_search_idx(K[0], A_diff_sum, A) << endl;

    return 0;
}