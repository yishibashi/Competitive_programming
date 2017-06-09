#include <iostream>
#include  <vector>
#include <algorithm>
#include <numeric>
#define ll long long int
using namespace std;

int solve(vector<int> vec)
{
    ll n = vec.size();
    ll sum = vec[0];
    int ans = 0;
    for (ll i = 1; i < n; i++) {
        if (sum > 0) {
            if (sum + vec[i] >= 0) {
                ans += 1 + (sum + vec[i]);
                sum = -1;
            } else{
                sum += vec[i];
            }
        } else if (sum <= 0) {
            if (sum + vec[i] <= 0) {
                ans += 1 - (sum + vec[i]);
                sum = 1;
            } else{
                sum += vec[i];
            }
        }
    }
    return ans;
}

int main() {
    int n, Ans;
    cin >> n;
    vector<int> as;

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        as.push_back(t);
    }
    vector<int> as1, as2;
    copy(as.begin(), as.end(), back_inserter(as1) );
    copy(as.begin(), as.end(), back_inserter(as2) );
    as1[0] = 1;
    as2[0] = -1;
    cout << solve(as) << " " << solve(as1) + abs(1-as[0]) << " " <<  solve(as2)+abs(-1-as[0]) << endl;
    Ans = min(solve(as), min(solve(as1) + abs(1-as[0]), solve(as2)+abs(-1-as[0])));
    cout << Ans << endl;
    return 0;
}
