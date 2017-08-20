#include <iostream>
#include <string>
using namespace std;

long long int ans;
long long int dp[20][2][2];

long long int solve(string s) {
    int L = s.size();
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++) dp[i][j][k] = 0;

    dp[0][0][0] = 1;
    for (int i = 0; i < L; ++i) {
        int D = s[i] - '0';
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                for (int d = 0; d <= (j ? 9 : D); ++d) {
                    dp[i + 1][j || (d < D)][k || d == 4 || d == 9] +=
                        dp[i][j][k];
                }
            }
        }
    }

    return dp[L][0][1] + dp[L][1][1];
}

int main() {
    long long int a, b;
    cin >> a >> b;
    cout << solve(to_string(b)) - solve(to_string(a - 1)) << endl;
    return 0;
}
