#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
using ull = unsigned long long;

bool check(vector<ll> &A, vector<ll> &B) {
    int size = A.size();
    for (int i = 0; i < size; i++)
        if (A[i] != B[i])return false;

    return true;
}

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
        cin >> B[i];

    int idx = -1;
    for (int i = 0; i < N; i++) {
        if (check(A, B)) {
            idx = i;
            break;
        }

    }
    cout << idx << endl;
    return 0;
}