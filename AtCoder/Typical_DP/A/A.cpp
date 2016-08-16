#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int N; cin >> N;
    vector<int> P;
    int max=0;
    for (int i = 0; i < N; ++i){
        int tmp; cin >> tmp;
        P.push_back(tmp);
        max += tmp;
    }

    sort(P.begin(), P.end(),greater<int>());

    bool dp[100*100+1] = {false};
    dp[0] = true;

    for (int j = 0; j < N; ++j) {
        for (int i = max; i >= 0; --i) {
            if(dp[i] == true) dp[i+P[j]] = true;
        }
        dp[P[j]] = true;
    }

    int ans=0;
    for (int k = 0; k < 100*100+1; ++k) {
        if(dp[k] == true) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
