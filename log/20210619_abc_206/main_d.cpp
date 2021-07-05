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

void remove(unordered_map<ll, ll> &remap2, ll a) {
    remap2.erase(a);
}

void remove(unordered_map<ll, ll> &remap2, ll a, ll b) {
    remap2.erase(a);
//    remap2.erase(b);
}

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    unordered_map<ll, ll> remap;
    unordered_map<ll, ll> remap2;
    unordered_map<ll, ll> cnt_map;
    rep(i, N) {
        cin >> A[i];
        remap[A[i]] = A[i];
        cnt_map[A[i]]++;
        remap2[A[i]] = 1;
    }
    unordered_map<ll, ll>::iterator itr = remap.begin();
    ll cnt = 0;
    for (int i = 0; i < N / 2; i++) {
        // 値が一致するか判定
        if (remap[A[i]] != remap[A[N - 1 - i]]) {
            // remapの中身を変更
            remap[A[i]] = remap[A[N - 1 - i]];
            // 変更したらカウントアップ
            cnt++;
        } else {
            remove(remap2, remap[A[i]]);
        }
    }

    ll cnt2 = 0;
    for (int i = 0; i < N / 2; i++) {
        // 値が一致するか判定
        if (remap[A[i]] != remap[A[N - 1 - i]]) {
            // remapの中身を変更
            remap[A[N - 1 - i]] = remap[A[i]];
            // 変更したらカウントアップ
            cnt2++;
        } else {
            remove(remap2, remap[A[i]]);
        }
    }

    cout << min(cnt, cnt2) << endl;
    return 0;
}