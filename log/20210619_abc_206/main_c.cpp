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
    unordered_map<ll, ll> a_map;
    rep(i, N) {
        cin >> A[i];
        a_map[A[i]]++;
    }
    ll max_n = N * (N - 1) / 2;
    unordered_map<ll, ll>::iterator itr = a_map.begin();
    for (itr; itr != a_map.end(); itr++) {
        if (itr->second > 1) {
            max_n -= itr->second * (itr->second - 1) / 2;
        }
    }
    cout << max_n << endl;

    return 0;
}