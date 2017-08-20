#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main() {
    int N, K;
    cin >> N >> K;
    int l;
    vector<int> ls;
    for (int i = 0; i < N; i++) {
        cin >> l;
        ls.push_back(l);
    }
    sort(ls.begin(), ls.end(), greater<int>());
    cout << accumulate(ls.begin(), ls.begin() + K, 0) << endl;
    return 0;
}
