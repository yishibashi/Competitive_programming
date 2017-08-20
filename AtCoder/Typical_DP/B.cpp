#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

int dp[1001][1001];

int main()
{
    int A, B; cin >> A >> B;
    int as[1001], bs[1001];

    for(int i = 1; i <= A; i++)
        cin >> as[i];

    for(int i = 1; i <= B; i++)
        cin >> bs[i];


    for(int i = 0; i < 1001; i++)
    for(int j = 0; j < 1001; j++)
        dp[i][j] = 0;

    //

    for(int i = 1; i <= A; i++)
        if((A+B-i)%2 == 0)
            dp[i][0] = dp[i-1][0] + as[A-i+1];
        else
            dp[i][0] = dp[i-1][0];
    for(int i = 1; i <= B; i++)
        if((A+B-i)%2 == 0)
            dp[0][i] = dp[0][i-1] + bs[B-i+1];
        else
            dp[0][i] = dp[0][i-1];



    for(int i = 1; i <= A; i++){
        for(int j = 1; j <= B; j++) {
            if ((A + B - i - j) % 2 == 0) {
                dp[i][j] = max(dp[i - 1][j] + as[A - i + 1], dp[i][j - 1] + bs[B - j + 1]);
            } else {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    cout << dp[A][B] << endl;
    return 0;

}