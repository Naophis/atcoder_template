#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;

int main() {
  int L, N;
  cin >> L >> N;
  vector<int> x(N);
  for (int i = 0; i < N; i++) cin >> x[i];
  int min_time = 0, max_time = 0;
  for (int i = 0; i < N; i++) {
    min_time = max(min_time, min(x[i], L - x[i]));
  }

  for (int i = 0; i < N; i++) {
    max_time = max(max_time, max(x[i], L - x[i]));
  }
  printf("%d %d\n", min_time, max_time);
  return 0;
}