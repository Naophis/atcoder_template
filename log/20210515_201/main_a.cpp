#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;

int main() {
  vector<int> v(3);
  for (int i = 0; i < 3; i++) cin >> v[i];
  sort(v.begin(), v.end());

  if (v[0] + v[2] == 2 * v[1])
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}