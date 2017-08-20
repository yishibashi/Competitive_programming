#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int d, w;
    while (cin >> d >> w, d && w) {
        vector<vector<int> > maps(d, vector<int>(w, 0));
        for (int i = 0; i < d; i++) {
            for (int j = 0; j < w; j++) {
                int tmp;
                cin >> tmp;
                maps[i][j] = tmp;
            }
        }
        int ans = 0;
        for (int i = 3; i <= d; i++) {
            for (int j = 3; j <= w; j++) {
                for (int s = 0; s <= d - i; s++) {
                    for (int t = 0; t <= w - j; t++) {
                        // get minimum
                        int mini = 10;
                        for (int x = t; x < t + j; x++) {
                            mini = min(mini, maps[s][x]);
                            mini = min(mini, maps[s + i - 1][x]);
                        }
                        for (int y = s; y < s + i; y++) {
                            mini = min(mini, maps[y][t]);
                            mini = min(mini, maps[y][t + j - 1]);
                        }
                        int tmp_ans = 0;
                        for (int y = s + 1; y < s + i - 1; y++) {
                            for (int x = t + 1; x < t + j - 1; x++) {
                                int dlt = mini - maps[y][x];
                                if (dlt > 0)
                                    tmp_ans += dlt;
                                else {
                                    tmp_ans = 0;
                                    continue;
                                }
                            }
                            ans = max(ans, tmp_ans);
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
