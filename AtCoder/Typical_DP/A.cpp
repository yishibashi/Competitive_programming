#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




bool dp[10001] = {false};


int main()
{
    int n, sum = 0; cin >> n;
    int ps[101];
    for(int i = 0; i < n; i++) {
        cin >> ps[i];
        sum += ps[i];
    }


    dp[0] = true;

    for(int i = 0; i < n; i++){
        for(int j = sum; j >= 0; j--){
            if(dp[j]) dp[j+ps[i]] = true;
        }
    }

    int ans = 0;
    for(auto b : dp)
        if(b) ans++;


    cout << ans << endl;

    return 0;
}



/* solution 1
bool dp[101][100*100+1] = {false};

int main()
{
    int n; cin >> n;
    int ps[101];
    int sum;
    for(int i = 0; i < n; i++) {
        cin >> ps[i];
        sum += ps[i];
    }

    dp[0][0] = true;
    for(int i = 0; i < n; i++){
        for(int j = sum; j >= 0; j--){
            if(dp[i][j]){
                dp[i+1][j+ps[i]] = true;
                dp[i+1][j] = true;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i <= sum; i++)
        if(dp[n][i]) ans++;

    cout << ans << endl;
}
*/

/* solution 2
int main()
{
    int n, sum = 0; cin >> n;
    vector<int> ps;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        sum += tmp;
        ps.push_back(tmp);
    }
    sort(ps.begin(), ps.end());

    dp[0][0] = true;

    for(int i = 0; i < n; i++){ // p_1, p_2 ,..., p_n
        for(int j = i; j >= 0; j--){ // p_i, p_(i-1) ,..., p_2, p_1
            for(int k = sum; k >= 0; k--) { // summation
                if (dp[j][k]) {
                    dp[j + 1][k + ps[i]] = true;
                    dp[j + 1][k] = true;
                }
            }
        }
    }


    int ans = 0;
    for(int i = 0; i <= sum; i++){
        if(dp[n][i]) ans++;
    }

    cout << ans << endl;

    return 0;
}

 */
