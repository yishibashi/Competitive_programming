#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n_min, n_max;

    while (cin >> m >> n_min >> n_max, (m && n_min && n_max)) {
        vector<int> ps;
        int p;
        for (int i = 0; i < m; i++) {
            cin >> p;
            ps.push_back(p);
        }
        sort(ps.begin(), ps.end(), greater<int>());

        int gap_max = 0;
        int itr = ps.size() - 1;
        for (int i = n_max; i >= n_min; i--) {
            if (ps[i - 1] - ps[i] > gap_max) {
                gap_max = ps[i - 1] - ps[i];
                itr = i;
            }
        }

        cout << itr << endl;
    }
    return 0;
}
