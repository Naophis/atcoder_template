#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;

typedef tuple<string, ll> mytpl;
int main() {
  int N;
  cin >> N;
  vector<mytpl> v(N);
  string s;
  ll h;
  for (int i = 0; i < N; i++) {
    cin >> s >> h;
    mytpl tpl = make_tuple(s, h);
    v.push_back(tpl);
  }

  sort(v.begin(), v.end(), [](mytpl& a, mytpl& b) { return get<1>(a) > get<1>(b); });

  cout << get<0>(v.at(1)) << endl;
  return 0;
}