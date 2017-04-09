// Pollock's conjecture

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000000

vector<int> dp1(MAX + 1, MAX);
vector<int> dp2(MAX + 1, MAX);

int main() {
    int n;
    dp1[0] = 0;
    dp2[0] = 0;

    for (int i = 1;; i++) {
        int t = i * (i + 1) * (i + 2) / 6;
        if (t > MAX) break;

        for (int j = 1; (t <= j) && (j <= MAX); j++) {
            dp1[j] = min(dp1[j], dp1[j - t] + 1);
            if (t % 2 == 1) {
                dp2[j] = min(dp2[j], dp2[j - t] + 1);
            }
        }
    }

    while (cin >> n, n) {
        cout << dp1[n] << " " << dp2[n] << endl;
    }

    return 0;
}
