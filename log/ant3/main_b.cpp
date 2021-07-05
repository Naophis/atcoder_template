#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define reps(i, a, n) for (ull i = (a); i < (ull)(n); ++i)
#define rep(i, n) reps(i, 0, n)

// 貪欲法
int main() {
    int N;
    cin >> N;
    vector<int> s(N);
    vector<int> t(N);
    rep(i, N)cin >> s[i];
    rep(i, N)cin >> t[i];

    ull now = s[0];
    for (int i = 0; i < N; i++) {
        // tで探す
        auto tmp_i = i;
        auto min_t_itr = min_element(t.begin() + i, t.end());
        auto min_t = *min_t_itr;
        auto next_idx = min_t_itr - t.begin() + 1;
        auto min_s_itr = min_element(t.begin() + next_idx, t.end());
        i = min_s_itr - t.begin();
        printf("%d, (%d, %d) : next_i= %d\n", i, s[tmp_i], min_t, i);
    }

    return 0;
}
/*
5
1 2 4 6 8
3 5 7 9 10
 */