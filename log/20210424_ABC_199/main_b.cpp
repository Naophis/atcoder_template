#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;

int A[110];
int B[110];
int C[1000];

int main() {
    int N;
    cin >> N;
    int max_loop = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] > max_loop)
            max_loop = A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
        if (B[i] > max_loop)
            max_loop = B[i];
    }
    int c = 0;

    for (int i = 1; i <= max_loop; i++) {
        bool ok = true;
        for (int j = 0; j < N; j++)
            if (!(A[j] <= i && i <= B[j]))
                ok = false;
        if (ok)
            c++;
    }

    printf("%d\n", c);
    return 0;
}

#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;

int A[110];
int B[110];
int C[1000];

int main() {
    int N;
    cin >> N;
    int max_loop = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] > max_loop)
            max_loop = A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
        if (B[i] > max_loop)
            max_loop = B[i];
    }
    int c = 0;

    for (int i = 1; i <= max_loop; i++) {
        bool ok = true;
        for (int j = 0; j < N; j++)
            if (!(A[j] <= i && i <= B[j]))
                ok = false;
        if (ok)
            c++;
    }

    printf("%d\n", c);
    return 0;
}
