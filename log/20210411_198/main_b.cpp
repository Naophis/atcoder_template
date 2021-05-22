#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ull = unsigned long long;

int main() {
    string N;
    cin >> N;

    int limit = 10 - N.length();
    string s2 = N;
    if (limit == 0) {
        int size = s2.length();
        bool ok = true;
        for (int i = 0; i < size / 2; i++) {
            if (s2[i] != s2[size - 1 - i]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    } else {

        for (int i = 0; i < limit; i++) {
            s2 = "0" + s2;
            int size = s2.length();
            bool ok = true;
            for (int i = 0; i < size / 2; i++) {
                if (s2[i] != s2[size - 1 - i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}