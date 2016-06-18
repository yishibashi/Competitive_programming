#include<iostream>
#include<vector>

using namespace std;

int w, h;
int answer = 0;
vector<vector<int> > map;

void dfs(int y, int x) {

    if (map[y][x] == 1) {
        map[y][x] = 0;

        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                int dx = x + j;
                int dy = y + i;
                if (0 <= dy && dy < h && 0 <= dx && dx < w
                    && map[dy][dx] == 1) {
                    dfs(dy, dx);
                }
            }
        }
    }
}

void check(int y, int x) {
    if (map[y][x] == 1) {
        answer++;
        dfs(y, x);
    }
}


int main() {

    while (cin >> w >> h && w && h) {
        int sOl;

        for (int i = 0; i < h; i++) {
            vector<int> tmp;
            for (int j = 0; j < w; j++) {
                cin >> sOl;
                tmp.push_back(sOl);
            }
            map.push_back(tmp);
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                check(i, j);
            }
        }

        cout << answer << endl;
        answer = 0;
        map.clear();
    }
    return 0;
}
