#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ull = unsigned long long;
ull c[61][61];

int main() {
    int a, b;
    ull K;
    cin >> a >> b >> K;
    string ans;
    c[0][0] = 1;
    for (int i = 0; i < 60; i++) {
        for (int j = 0; j < i + 1; j++) {
            c[i + 1][j] += c[i][j];
            c[i + 1][j + 1] += c[i][j];
        }
    }
    while (a + b > 0) {
        ull x = 0;
        if (a >= 1)x = c[a + b - 1][a - 1];
        if (K <= x) {
            ans += 'a';
            a--;
        } else {
            ans += 'b';
            b--;
            K -= x;
        }
    }
    cout << ans << endl;

    return 0;

}