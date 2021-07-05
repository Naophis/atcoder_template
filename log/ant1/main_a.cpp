#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;
using ull = unsigned long long;

/* REP macro */
#define reps(i, a, n) for (ull i = (a); i < (ull)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i, n) for (ll i = n - 1; i >= 0; i--)
#define rrepd(i, n) for (ll i = n; i >= 1; i--)

typedef pair<int, int> pos_t;

void create_distmap(unordered_map<int, int> &distmap, vector<string> &maze, pos_t &goal) {

}

const ull INF = 10000000;
ull d[10000][10000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs(vector<string> &maze, pos_t &start, pos_t &goal) {
    int N = maze.size(); //縦
    int M = maze[0].size();//横
    queue<pos_t> que;
    rep(i, N) rep(j, M) d[i][j] = INF;
    d[goal.first][goal.second] = 0;
    que.push(pos_t(goal.first, goal.second));
    while (que.size()) {
        pos_t p = que.front();
        printf("(%d, %d)\n", p.first, p.second);
        que.pop();
        if (p.first == start.first && p.second == start.second)break;
        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if (0 <= nx && nx < N && 0 <= ny && ny < M//
                && maze[nx][ny] != '#' && d[nx][ny] == INF) {
                que.push(pos_t(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[start.first][start.second];
}

/*
#S######.#
......#..#
.#.##.##.#
.#........
##.##.####
....#....#
.#######.#
....#.....
.####.###.
....#...G#
*/
void maze_solve() {
    int N, M;
    cin >> N >> M;
    vector<string> wall(N);
    pos_t start;
    pos_t goal;

    rep(i, N) {
        cin >> wall[i];
        rep(j, M) {
            if (wall[i][j] == 'S') {
                start.first = i;
                start.second = j;
            } else if (wall[i][j] == 'G') {
                goal.first = i;
                goal.second = j;
            }
        }
    }
    cout << bfs(wall, start, goal) << endl;
}

int main() {
    maze_solve();
    return 0;
}


void max_sum_problem() {
    ull N, K;
    cin >> N;
    vector<ull> a(N);
    rep(i, N) cin >> a[i];
    vector<ull> dp(N + 1);
    dp[0] = 0;
    for (int i = 0; i < N; ++i) {
        dp[i + 1] = max(dp[i], dp[i] + a[i]);
    }
    cout << dp[N] << endl;
}

/*
bool dfs(ull i, ull sum, ull N, ull tgt, vector<ull> &a) {
    if (i == N) return sum == tgt;
    if (dfs(i + 1, sum, N, tgt, a)) return true;
    if (dfs(i + 1, sum + a[i], N, tgt, a)) return true;
    return false;
}

void dfs(vector<string> &f, int x, int y, int N, int M) {
    f[x][y] = '.';
    for (int dx = -1; dx <= 1; dx++)
        for (int dy = -1; dy <= 1; dy++) {
            int nx = x + dx, ny = y + dy;
            if (0 <= nx && nx < N && 0 <= ny && ny < M && f[nx][ny] == 'W')
                dfs(f, nx, ny, N, M);
        }

    return;
}

void solve_lake_counting() {
    int N, M;
    cin >> N >> M;
    vector<string> f(N);
    rep(i, N)rep(j, M)cin >> f[i][j];
    int c = 0;
    rep(i, N) {
        rep(j, M) {
            if (f[i][j] == 'W') {
                dfs(f, i, j, N, M);
                c++;
            }
        }
    }
    cout << c << endl;
}
*/
/*
W........WW.
.WWW.....WWW
....WW...WW.
.........WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.
*/
