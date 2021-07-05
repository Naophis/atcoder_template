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

ull rest_time(deque<ull> &T) {
    ull sum = 0;
    for (const auto t :T)sum += t;
    return sum;
}

ull sum_time(vector<ull> &T) {
    ull sum = 0;
    for (const auto t :T)sum += t;
    return sum;
}

void test() {
    ll N;
    cin >> N;
    vector<ull> T(N);
    rep(i, N)cin >> T[i];
    ull min_time = ULONG_LONG_MAX;
    vector<ull> oven1;
    vector<ull> oven2;
    for (ull bit = 0; bit < (1 << N); bit++) {
        oven1.clear();
        oven2.clear();
        for (ull i = 0; i < N; i++) {
            if (bit & (1 << i)) { // 列挙に i が含まれるか
                oven1.push_back(T[i]);
            } else {
                oven2.push_back(T[i]);
            }
        }
        ull oven1_time = sum_time(oven1);
        ull oven2_time = sum_time(oven2);
        ull tmp_time = max(oven1_time, oven2_time);
        if (min_time > tmp_time)
            min_time = tmp_time;
    }
    cout << min_time << endl;
}

int main() {
    cout << ULONG_LONG_MAX << endl;
    cout << log2(ULONG_LONG_MAX) << endl;
    ll N;
    cin >> N;
    deque<ull> T;
    rep(i, N) {
        ll tmp;
        cin >> tmp;
        T.push_back(tmp);
    }
    sort(T.begin(), T.end());
    ull min_s = ULONG_LONG_MAX;
    ull tmp_sum1 = 0;
    for (int i = 0; i < N; i++) {
        ull tmp_sum2 = rest_time(T);
        if ((i & 0x01) == 0x00) { //偶奇回で前後交互に取る
//     if (tmp_sum1 + T[0] < tmp_sum2) { //前から取っても値がひっくり返らない時
            tmp_sum1 += T[0];
            T.pop_front();
            tmp_sum2 = rest_time(T);
        } else {
            tmp_sum1 += T[T.size() - 1];
            T.pop_back();
            tmp_sum2 = rest_time(T);
        }
        ll tmp = max(tmp_sum1, tmp_sum2);
        if (min_s >= tmp)
            min_s = tmp;

    }
    cout << min_s << endl;

    return 0;
}
