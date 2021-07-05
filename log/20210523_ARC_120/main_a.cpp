#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    ull A, max_ai = 0, sum = 0, ssum = 0;
    for (int i = 1; i <= N; i++) {
        cin >> A;
        max_ai = max(max_ai, A);
        sum += A;
        ssum += sum;
        cout << max_ai * i + ssum << endl;
    }
    return 0;
}