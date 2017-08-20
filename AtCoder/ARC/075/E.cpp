#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

#define MAX_N 200000
#define MAX_K 1000000000

int main() {
    int n, k, ans;
    int ns[MAX_N];
    long long int dp[MAX_N + 1];

    cin >> n >> k;

    int a;
    cin >> a;
    ns[0] = dp[1] = a;
    for (int i = 1; i < n; i++) {
        cin >> a;
        ns[i] = a;
        dp[i + 1] = dp[i] + a;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n + 1; j++) {
            if ((dp[j] - dp[i]) >= ((j - i) * k)) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
