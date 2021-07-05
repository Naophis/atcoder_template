#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int lower = max(A, C);
    int upper = min(B, D);
    cout << max(0, upper - lower) << endl;

    return 0;
}