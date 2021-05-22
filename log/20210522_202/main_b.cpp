#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;

int main() {
    string s;
    cin >> s;
    int size = s.length();
    for (int i = 0; i < size; i++) {
        if (s[size - 1 - i] == '6') {
            cout << 9;
        } else if (s[size - 1 - i] == '9') {
            cout << 6;
        } else {
            cout << s[size - 1 - i];
        }
    }
    printf("\n");
    return 0;
}