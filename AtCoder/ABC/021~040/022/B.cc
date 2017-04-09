#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    int as[100001] = {0};
    int ans;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        as[a]++;
    }

    for (int a : as) {
        if (a > 0) {
            ans += (a - 1);
        }
    }
    cout << ans << endl;

    return 0;
}
