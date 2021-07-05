#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define reps(i, a, n) for (ull i = (a); i < (ull)(n); ++i)
#define rep(i, n) reps(i, 0, n)

int main() {
    int N;
    cin >> N;
    vector<ull> s(N);
    vector<ull> t(N);
    rep(i, N)cin >> s[i];
    rep(i, N)cin >> t[i];

    ull now = s[0];
    for (int i = 0; i < N; i++) {
        auto min_itr = min_element(t.begin() + i, t.end());
        auto min_t = t[*min_itr];
        cout << min_t << endl;
        cout << min_itr - t.begin() << endl;
    }

    return 0;
}