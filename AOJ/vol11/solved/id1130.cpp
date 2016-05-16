//ICPC Domestic 2004

#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int W, H;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<string> room;
queue<pair<int, int> > posi;

int bfs() {
    int answer = 1;
    int y, x;
    while (posi.size()) {
        y = posi.front().first;
        x = posi.front().second;
        posi.pop();
        for (int i = 0; i < 4; i++) {
            if (0 <= y + dy[i] && y + dy[i] < H
                && 0 <= x + dx[i] && x + dx[i] < W) {

                if (room[y + dy[i]][x + dx[i]] == '.') {

                    room[y + dy[i]][x + dx[i]] = '#';
                    answer++;
                    posi.push(make_pair(y + dy[i], x + dx[i]));
                }
            }
        }
    }
    return answer;
}

int main() {
    string line;
    while (cin >> W >> H && W && H) {
        room.erase(room.begin(), room.end());
        for (int y = 0; y < H; y++) {
            cin >> line;
            for (int x = 0; x < W; x++) {
                if (line[x] == '@') posi.push(make_pair(y, x));
            }
            room.push_back(line);
        }
        cout << bfs() << endl;
    }
    return 0;
}
