#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    vector<vector<int> > C(H, vector<int>(W));

    vector<int> as;

    for (int i = 1; i <= N; i++) {
        int a;
        cin >> a;
        for (int j = 0; j < a; j++) {
            as.push_back(i);
        }
    }

    sort(as.begin(), as.end());

    for (int i = 0; i < H; i++) {
        for (int j = W * i; j < W * (i + 1); j++) {
            C[i][j - W * i] = as[j];
            // cout << "(i, j) = ( " << i << ", " << j << " )  == " << C[i][j]
            //     << endl;
        }
        if (i % 2 == 1) reverse(C[i].begin(), C[i].end());
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
