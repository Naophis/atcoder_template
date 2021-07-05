#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> s(H);
    for (int i = 0; i < H; i++)
        cin >> s[i];

    ull A[500][500] = {0};
    ull B[500][500] = {0};

    B[0][N - 1] = A[0][N - 1] + B[1][N - 1];
    B[1][N - 1] = A[1][N - 1];
    for (ull i = N - 2; i >= 0; i--)
        B[1][i] = B[1][i + 1] + A[1][i];

    B[0][N - 1] = A[0][N - 1] + B[1][N - 1];
    B[1][N - 1] = A[1][N - 1];
    for (ull i = N - 2; i >= 0; i--)
        B[1][i] = B[1][i + 1] + A[1][i];

    return 0;
}