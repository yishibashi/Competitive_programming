#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m, (n && m)) {
        vector<int> as;
        int a;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            as.push_back(a);
        }
        sort(as.begin(), as.end(), greater<int>());

        for (int i = as.size() - 1; i >= 0; i--) {
            for (int j = i - 1; j >= 0; j--) {
                if (as[i] + as[j] <= m) ans = max(ans, as[i] + as[j]);
                if (as[i] + as[j] < ans) continue;
            }
        }

        if (ans > 0)
            cout << ans << endl;
        else
            cout << "NONE" << endl;
    }

    return 0;
}
