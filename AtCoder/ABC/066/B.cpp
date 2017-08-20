#include <algorithm>
#include <iostream>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.size() == 2) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = s.size() - 1; i >= 0; --i) {
        string ss = s.substr(0, i);
        if (ss.size() % 2 == 1) continue;
        int m = ss.size() / 2;
        for (int j = 0; j < m; j++) {
            if (ss[j] != ss[m + j]) break;
            if (j == m - 1) {
                cout << ss.size() << endl;
                return 0;
            }
        }
        if(i == 0) cout << 0 << endl;

    }

    return 0;
}
