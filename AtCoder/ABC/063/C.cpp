#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    vector<int> nn;
    int n;
    cin >> n;
    int answer;

    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        nn.push_back(s);
    }
    sort(nn.begin(), nn.end());

    answer = accumulate(nn.begin(), nn.end(), 0);

    for (int i = 0; i < n; i++) {
        if (answer % 10 == 0) {
            if (nn[i] % 10 != 0) answer -= nn[i];
        } else {
            break;
        }
    }
    if (answer % 10 == 0) answer = 0;

    cout << answer << endl;

    return 0;
}
