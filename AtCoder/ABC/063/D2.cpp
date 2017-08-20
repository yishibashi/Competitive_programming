#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int N, A, B;
vector<int> hps;

bool enough(int T) {
    int s = 0;
    for (auto h : hps) {
        int t = h - B * T;
        if (t <= 0) continue;
        s += ceil((double)t / (A - B));
        if (s > T) return false;
    }
    return true;
}

int main() {
    cin >> N >> A >> B;

    for (int i = 0; i < N; i++) {
        int hp;
        cin >> hp;
        hps.push_back(hp);
    }

    int l = 1;
    int r = *max_element(hps.begin(), hps.end()) / B + 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (enough(m))
            r = m - 1;
        else
            l = m + 1;
    }
    cout << l << endl;

    return 0;
}
