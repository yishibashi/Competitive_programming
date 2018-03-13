#include <algorithm>
#include <iostream>
#include <vector>

typedef long long int ll;
using namespace std;
vector<int> as, bs, cs;

int main() {
    int N;
    ll ans = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        ll tmp;
        cin >> tmp;
        as.push_back(tmp);
    }
    for (int i = 0; i < N; i++) {
        ll tmp;
        cin >> tmp;
        bs.push_back(tmp);
    }
    for (int i = 0; i < N; i++) {
        ll tmp;
        cin >> tmp;
        cs.push_back(tmp);
    }
    sort(as.begin(), as.end());
    sort(bs.begin(), bs.end());
    sort(cs.begin(), cs.end());

    for (int j = 0; j < N; j++) {
        ll cb_number = (cs.end() - upper_bound(cs.begin(), cs.end(), bs[j]));
        ll ba_number = (lower_bound(as.begin(), as.end(), bs[j]) - as.begin());
        ans += (cb_number * ba_number);
    }

    cout << ans << endl;

    return 0;
}
