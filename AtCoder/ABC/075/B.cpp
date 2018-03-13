#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> map;

    for (int i = 0; i < H; i++) {
        string tmp;
        cin >> tmp;
        map.push_back(tmp);
    }

    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            if (map[y][x] == '.') {
                int nB = 0;
                for (int dy = -1; dy <= 1; dy++) {
                    for (int dx = -1; dx <= 1; dx++) {
                        if (0 <= x + dx && x + dx < W && 0 <= y + dy &&
                            y + dy < H) {
                            if (map[y + dy][x + dx] == '#') nB++;
                        }
                    }
                }
                map[y][x] = to_string(nB)[0];
            }
        }
    }

    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            cout << map[y][x];
        }
        cout << endl;
    }

    return 0;
}
