#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
using ull = unsigned long long;

/* REP macro */
#define reps(i, a, n) for (ull i = (a); i < (ull)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i, n) for (ll i = n - 1; i >= 0; i--)
#define rrepd(i, n) for (ll i = n; i >= 1; i--)

// Saruman's Army POJ 3069

int binary_search(vector<int> v, int left, int right, int key) {
    while (right >= left) {
        int mid = left + (right - left) / 2;
        printf("%d, %d, %d\n", left, mid, right);
        if (v[mid] == key)return mid;
        else if (v[mid] > key) right = mid - 1;
        else if (v[mid] < key) left = mid + 1;
    }
    return left;
}

int main() {
    int N, R;
    cin >> N >> R;
    vector<int> X(N);
    rep(i, N)cin >> X[i];
    sort(X.begin(), X.end());
    int i = 0, ans = 0;
    while (i < N) {
        int s = X[i++];
        while (i < N && X[i] <= s + R)i++;
        int p = X[i - 1];
        cout << p << endl;
        while (i < N && X[i] <= p + R)i++;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
/*
6
10
1 7 15 20 30 50
 */