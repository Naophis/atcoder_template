#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    int tmp_c;
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);
    unordered_map<ull, ull> mp;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
        cin >> B[i];
    for (int i = 0; i < N; i++) {
        cin >> tmp_c;
        mp[B[tmp_c - 1]]++;
    }
    ull cnt = 0;
    for (int i = 0; i < N; i++) {
        cnt += mp[A[i]];
    }
    printf("%lld\n", cnt);
    return 0;
}