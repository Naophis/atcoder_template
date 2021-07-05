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
    ll A, B, C;
    cin >> A >> B >> C;

    if (A == B) {
        cout << "=" << endl;
    } else if ((C & 0x01) == 0x00) {//偶数乗なら（A,Bの絶対値で比較）
        if (abs(A) < abs(B))
            cout << "<" << endl;
        else if (abs(A) > abs(B))
            cout << ">" << endl;
        else
            cout << "=" << endl;
    } else {
        if (A < 0 && B < 0) {
            if (A < B)
                cout << ">" << endl;
            else if (A > B)
                cout << "<" << endl;
            else
                cout << "=" << endl;
        } else if (A >= 0 && B < 0) {
            cout << ">" << endl; //Bが奇数乗しても負の数
        } else if (A < 0 && B >= 0) {
            cout << "<" << endl; //Aが奇数乗しても負の数
        } else if (A >= 0 && B >= 0) {
            if (A < B)
                cout << "<" << endl;
            else if (A > B)
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
    }
    return 0;
}
