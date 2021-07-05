#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
int A[440000];
int B[440000];
int T[440000];
int S[440000];

void swap_int(int (&S)[440000], int a, int b) {
    auto st1 = S[a];
    S[a] = S[b];
    S[b] = st1;
}

void swap2(int (&S)[440000], int n) {
    for (int i = 0; i < n; i++) {
        swap_int(S, i, i + n);
    }
}

int main() {
    int N, Q;
    cin >> N;
    string s;
    cin >> s;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        cin >> T[i] >> A[i] >> B[i];
    }

    for (int i = 0; i < 2 * N; i++) {
        S[i] = i;
    }
    bool ok = false;
    for (int i = 0; i < Q; i++) {
        if (T[i] == 1) {
            if (!ok) {
                swap_int(S, A[i] - 1, B[i] - 1);
            } else {
                int a = A[i];
                int b = B[i];
                if (a > N) {
                    a -= N;
                } else {
                    a += N;
                }
                if (b > N) {
                    b -= N;
                } else {
                    b += N;
                }
                swap_int(S, a - 1, b - 1);
            }
        } else {
            ok = ok ? false : true;
        }
    }
    if (ok) {
        swap2(S, N);
    }
    string res;
    for (int i = 0; i < 2 * N; i++) {
        res += s[S[i]];
    }
    cout << res << endl;
    return 0;
}