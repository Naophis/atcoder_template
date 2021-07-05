#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ull = unsigned long long;

int main() {
    ull N;
    cin >> N;
    ull A[2][110] = {0};
    ull B[2][110] = {0};
    for (ull i = 0; i < 2; i++)
        for (ull j = 0; j < N; j++)
            cin >> A[i][j];

    B[0][N - 1] = A[0][N - 1] + B[1][N - 1];
    B[1][N - 1] = A[1][N - 1];
    for (ull i = N - 2; i >= 0; i--)
        B[1][i] = B[1][i + 1] + A[1][i];

    for (ull i = N - 2; i >= 0; i--)
        if (B[1][i] > B[0][i + 1])
            B[0][i] = B[1][i] + A[0][i];
        else
            B[0][i] = B[0][i + 1] + A[0][i];

    cout << B[0][0] << endl;
    return 0;
}