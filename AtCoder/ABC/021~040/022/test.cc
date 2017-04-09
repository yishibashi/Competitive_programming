#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> as(100001, -1);
    int ans;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        as[a]++;
    }

    for (int a : as) {
        if (a > 0) {
            ans += a;
        }
    }
    cout << ans << endl;

    return 0;
}
