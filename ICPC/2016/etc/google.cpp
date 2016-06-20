//http://icpc.iisf.or.jp/2016-tsukuba/domestic/messages/?lang=ja#
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<string> map;
vector<string> original_map;
int N, M;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
typedef pair<int, int> Pi;
vector<Pi> ans;
queue<Pi> que;

void bfs(){
    vector<vector<int> > path(N, vector<int>(M,0));
    que.push(make_pair(0,0));
    while(!que.empty()) {
        Pi p = que.front();
        que.pop();
        if (p.first == N - 1 && p.second == M - 1) {
            for (;;) {
                ans.push_back(p);
                if (p.first == 0 && p.second == 0) break;
                int i = path[p.first][p.second];
                int ny = p.first - dy[i], nx = p.second - dx[i];
                p = Pi(ny, nx);
            }
        }
        for (int i = 0; i < 4; ++i) {
            int ny = p.first + dy[i], nx = p.second + dx[i];
            if (0 <= ny && ny < N && 0 <= nx && nx < M) {
                if (map[ny][nx] != '*') {
                    path[ny][nx] = i;
                    que.push(Pi(ny, nx));
                    map[ny][nx] = '*';
                }
            }
        }
    }
}



int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        string tmp; cin >> tmp;
        map.push_back(tmp);
        original_map.push_back(tmp);
    }

    bfs();
    reverse(ans.begin(), ans.end());
    cout << "message is...  ";
    string answer;
    for (int i = 0; i < ans.size(); ++i) {
        if(original_map[ans[i].first][ans[i].second] != '+') answer+=original_map[ans[i].first][ans[i].second];
    }
    cout << answer << endl;
    return 0;
}
