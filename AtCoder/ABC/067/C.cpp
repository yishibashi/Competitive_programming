#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> as;
    int a;
    long long int sum, ans, sunuke, arai;
    for (int i = 0; i < N; i++) {
        cin >> a;
        as.push_back(a);
    }
    sum = accumulate(as.begin(), as.end(), 0l);

    sunuke = as[0];
    arai = sum - as[0];

    ans = abs(sunuke - arai);
    for (int i = 1; i < N - 1; i++) {
        sunuke += as[i];
        arai -= as[i];
        ans = min(ans, abs(sunuke - arai));
    }

    cout << ans << endl;
    return 0;
}
