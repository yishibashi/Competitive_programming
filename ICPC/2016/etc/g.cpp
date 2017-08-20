#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int N, M;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
typedef pair<int, int> P;
queue<P> q;
vector<P> answer;
vector<string> mtrx;
vector<string> mtrx_origin;

void bfs() {
    q.push(make_pair(0, 0));
    vector<vector<int> > path(N, vector<int>(M, 0));
    while (!q.empty()) {
        P p = q.front();
        q.pop();
        if (p.first == N - 1 && p.second == M - 1) {
            while (true) {
                answer.push_back(p);
                if (p.first == 0 && p.second == 0) break;
                int i = path[p.first][p.second];
                int ny = p.first - dy[i];
                int nx = p.second - dx[i];
                p = P(ny, nx);
            }
        }
        for (int i = 0; i < 4; ++i) {
            int ny = p.first + dy[i];
            int nx = p.second + dx[i];
            if (0 <= ny && ny < N && 0 <= nx && nx < M) {
                if (mtrx[ny][nx] != '*') {
                    path[ny][nx] = i;
                    q.push(P(ny, nx));
                    mtrx[ny][nx] = '*';
                }
            }
        }
    }
}

int main() {
    cin >> N >> M;
    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        mtrx.push_back(s);
        mtrx_origin.push_back(s);
    }

    bfs();
    reverse(answer.begin(), answer.end());

    string message;

    for (int i = 0; i < answer.size(); i++) {
        if (mtrx_origin[answer[i].first][answer[i].second] != '+')
            message += mtrx_origin[answer[i].first][answer[i].second];
    }
    cout << message << endl;

    return 0;
}
