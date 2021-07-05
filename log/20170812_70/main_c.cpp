#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    ll T;
    ll res = 1;

    for (int i = 0; i < N; i++) {
        cin >> T;
        res = lcm(res, T);
    }
    cout << res << endl;
    return 0;
}