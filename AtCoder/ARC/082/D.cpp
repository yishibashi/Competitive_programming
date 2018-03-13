#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    int a;
    int ans = 0;
    vector<int> ss;
    for (int i = 1; i <= N; i++) {
        cin >> a;
        if (i == a) {
            ss.push_back(a);
        }
    }

    for (int i = 0; i < ss.size(); i++) {
        if (i + 1 != ss.size() && ss[i] + 1 != ss[i + 1]) {
            ans++;
        } else if (i + 1 != ss.size() && ss[i] + 1 == ss[i + 1]) {
            ans++;
            i++;
        } else {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
