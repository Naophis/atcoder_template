#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;

int main() {
  string N;
  cin >> N;
  int size = N.size();
  bool ok = true;
  for (int i = 0; i < size; i++) {
    if (N[i] != N[size - 1 - i]) ok = false;
  }
  if (ok)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}