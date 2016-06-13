#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

vector<int> nty = {20, 19, 20, 19, 20, 19, 20, 19, 20, 19};
vector<int> ty = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20};


int main() {
    int n;
    cin >> n;
    int Y, M, D;

    for (int i = 0; i < n; i++) {
        cin >> Y >> M >> D;

        int dy, dlt;

        dy = 1000 - Y - 1;
        if (Y % 3 == 0) {
            dlt = accumulate(ty.begin() + M, ty.end(), 0) + 20 - D + 1;
        }
        else {
            dlt = accumulate(nty.begin() + M, nty.end(), 0) + nty[M - 1] - D + 1;
        }

        int thy = 1000 / 3 - Y / 3;
        int nthy = dy - thy;

        int answer = thy * 200 + nthy * 195 + dlt;

        cout << answer << endl;
    }


    return 0;
}