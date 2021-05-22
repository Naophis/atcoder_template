#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;

int main() {
    double R, X, Y;
    cin >> R >> X >> Y;
    double dist = sqrt(X * X + Y * Y);
    int step_int = ceil(dist / R);

    if (step_int == 1 && dist != R)
        step_int++;
    cout << step_int << endl;

    return 0;
}