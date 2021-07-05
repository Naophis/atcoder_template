#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) reps(i, 0, n)

int solve1(vector<ll>& a, int N) {
  ll max_length = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        ll len = a[i] + a[j] + a[k];
        ll ma = max(a[i], max(a[j], a[k]));
        ll rest = len - ma;
        if (ma < rest) {
          max_length = max(max_length, len);
        }
      }
    }
  }
  return max_length;
}
int main() {
  int N;
  cin >> N;
  vector<ll> a(N);
  for (int i = 0; i < N; i++) cin >> a[i];
  ll res = solve1(a, N);
  cout << res << endl;
  return 0;
}