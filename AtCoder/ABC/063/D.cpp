#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int ans = 0;

    vector<int> hps;
    for (int i = 0; i < N; i++) {
        int hp;
        cin >> hp;
        hps.push_back(hp);
    }
    sort(hps.begin(), hps.end());

    int T = ceil((double)hps[0] / B);
    int size = hps.size();

    int C = A - B;
    ans += T;
    while (hps[size - 1] > 0) {
        for (int i = 0; i < size - 1; i++) {
            hps[i] -= B * T;
        }
    }

    cout << ans << endl;
    return 0;
}
