#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
using ull = unsigned long long;

ull fibo(ll n) {
  vector<ll> v(n);
  if (n <= 1) return 0;
  v[0] = v[1] = 0;

  for (int i = 2; i < n; i++) {
    v[i] = v[i - 1] + v[i - 2];
  }
  return v[n - 1];
}
int main() {
  cout << fibo(2) << endl;
  return 0;
}