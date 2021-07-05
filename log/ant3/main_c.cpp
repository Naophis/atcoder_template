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

// 貪欲法＋辞書順最小問題
int main() {

    int N;
    string s;

    cin >> N;
    cin >> s;

    string t;
    int start = 0, end = N - 1;
    rep(i, N) //
        if (s[start] < s[end])
            t += s[start++];
        else
            t += s[end--];
    cout << t << endl;
    return 0;
}
/*
6
ACDBCB
*/