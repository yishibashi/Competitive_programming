#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int ans = 0;
int N, M;

vector<vector<int> > Rs(12, vector<int>());
int R[12];

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        R[i] = i;
        R[x] += y;
        R[y] += x;
        Rs[i].push_back(i * i * i);
        Rs[x].push_back(y * y * y);
        Rs[y].push_back(x * x * x);
    }
    for (int i = 0; i < M; i++) {
        sort(Rs[i].begin(), Rs[i].end());
    }

    for (int i = 0; i < Rs.size(); i++) {
        for (int j = 0; j < Rs[i].size(); j++) {
            cout << Rs[i][j];
        }
        cout << endl;
    }

    // cout << ans << endl;

    return 0;
}

/*
7 9
1 2
1 3
2 3
4 5
4 6
4 7
5 6
5 7
6 7
>>
0
123
123
123
4567
4567
4567
4567
8
*/
