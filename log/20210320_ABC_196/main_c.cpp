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
    ull N;
    cin >> N;

    string sn = to_string(N);
    ll sn_size = sn.size();
    string sn_1 = sn.substr(0, sn_size / 2);
    string sn_2 = sn.substr(sn_size / 2, sn_size / 2);
    int len = sn.size();
    if (len & 1) {
        if (len == 1) cout << 0 << endl;
        else cout << string(sn.size()/2,'9') << endl;
        return 0;
    }
    if (sn_1 <= sn_2) {
        cout << sn_1 << endl;
    } else {
        cout << atoll(sn_1.c_str()) - 1 << endl;
    }
    return 0;
}