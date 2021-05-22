#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;

int reverse_dice(int d) {
    return 7 - d;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int a2 = reverse_dice(a);
    int b2 = reverse_dice(b);
    int c2 = reverse_dice(c);
    cout << (a2 + b2 + c2) << endl;
    return 0;
}