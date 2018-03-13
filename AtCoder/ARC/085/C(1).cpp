#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int ans = 0;

    int t = (int)pow(2 * M, M);
    //((N - M) * 100)
    ans += 1900 * t;
    cout << ans << endl;

    return 0;
}
