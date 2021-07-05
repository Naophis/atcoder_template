#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
using ull = unsigned long long;

ull fibo(ull n) {
  ull v[3];
  if (n <= 1) return 1;
  v[0] = v[1] = v[2] = 1;
  for (int i = 2; i < n; i++) {
    v[2] = v[1] + v[0];
    v[0] = v[1];
    v[1] = v[2];
  }
  return v[2];
}
int main() {
  ull N;
  cin >> N;
  cout << fibo(N) << endl;
  return 0;
}