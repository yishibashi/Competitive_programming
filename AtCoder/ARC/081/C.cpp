#include <algorithm>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> As;
    int A;
    for (int i = 0; i < N; i++) {
        cin >> A;
        As.push_back(A);
    }
    sort(As.begin(), As.end());
    int h = 0, w = 0;

    for (int i = N - 1; i > 0; --i) {
        if (As[i] == As[i - 1]) {
            if (h == 0) {
                h = As[i];
                --i;
            } else {
                w = As[i];
                break;
            }
        }
    }
    cout << (long long int)h * w << endl;

    return 0;
}
