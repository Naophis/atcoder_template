#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;

#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

struct Fast {
    Fast() {
        std::cin.tie(0);
        ios::sync_with_stdio(false);
    }
} fast;

/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;

/* define short */
#define pb push_back
#define mp make_pair
#define all(obj) (obj).begin(), (obj).end()
#define yesno(bool)        \
  if (bool) {              \
    cout << "yes" << endl; \
  } else {                 \
    cout << "no" << endl;  \
  }

/* REP macro */
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i, n) for (ll i = n - 1; i >= 0; i--)
#define rrepd(i, n) for (ll i = n; i >= 1; i--)

/* debug */
// 標準エラー出力を含む提出はrejectされる場合もあるので注意
#define debug(x) cerr << "\033[33m(line:" << __LINE__ << ") " << #x << ": " << x << "\033[m" << endl;

/* func */
inline int in_int() {
    int x;
    cin >> x;
    return x;
}

inline ll in_ll() {
    ll x;
    cin >> x;
    return x;
}

inline string in_str() {
    string x;
    cin >> x;
    return x;
}

// search_length:
// 走査するベクトル長の上限(先頭から何要素目までを検索対象とするか、1始まりで)
template<typename T>
inline bool vector_finder(std::vector<T> vec, T element, unsigned int search_length) {
    auto itr = std::find(vec.begin(), vec.end(), element);
    size_t index = std::distance(vec.begin(), itr);
    if (index == vec.size() || index >= search_length) {
        return false;
    } else {
        return true;
    }
}

template<typename T>
inline void print(const vector<T> &v, string s = " ") {
    rep(i, v.size()) cout << v[i] << (i != (ll) v.size() - 1 ? s : "\n");
}

template<typename T, typename S>
inline void print(const pair<T, S> &p) {
    cout << p.first << " " << p.second << endl;
}

template<typename T>
inline void print(const T &x) {
    cout << x << "\n";
}

template<typename T, typename S>
inline void print(const vector<pair<T, S>> &v) {
    for (auto &&p : v) print(p);
}

// 第一引数と第二引数を比較し、第一引数(a)をより大きい/小さい値に上書き
template<typename T>
inline bool chmin(T &a, const T &b) {
    bool compare = a > b;
    if (a > b) a = b;
    return compare;
}

template<typename T>
inline bool chmax(T &a, const T &b) {
    bool compare = a < b;
    if (a < b) a = b;
    return compare;
}

typedef tuple<int, int, int> mytuple;

using ull = unsigned long long;

ull nPr(ull n, ull r) {
    if (n < r) return 0;
    else if (r == 0) return 1;
    else if (r == 1) return n;
    ull result = 1;
    for (ull i = n; i > n - r; --i)
        result *= i;
    return result;
}

ull factorial(ull n) {
    ull res = 1;
    while (n > 0)
        res *= n--;
    return res;
}

ull nCr(ull n, ull r) {
    if (r * 2 > n) r = n - r;
    ull res = 1;
    for (ull i = 0; i < r; i++)
        res = res * (n - i) / (i + 1);
    return res;
}

void split(string &str, string &separator, vector<string> &result) {
    if (separator == "") return;
    string tstr = str + separator;
    unsigned long l = tstr.length(), sl = separator.length();
    string::size_type pos = 0, prev = 0;

    for (; pos < l && (pos = tstr.find(separator, pos)) != string::npos; prev = (pos += sl)) {
        result.emplace_back(tstr, prev, pos - prev);
    }
}

int main() {
    string s;
    string separator = "ZONe";
    cin >> s;

    vector<string> result;
    split(s, separator, result);
    for (const auto ss:result) {
        printf("%s\n", ss.c_str());
    }
    printf("%");
    return 0;
}