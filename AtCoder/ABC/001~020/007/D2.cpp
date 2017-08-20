

long long solve(const string &S) {
    const int L = S.size();
    dp[0][0][0] = 1;
    for (int i = 0; i < L; ++i) {
        const int D = S[i] - '0';
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
    long long A, B;
    cin >> A >> B;
    cout << solve(toString(B)) - solve(toString(A - 1)) << endl;

    return 0;
}
