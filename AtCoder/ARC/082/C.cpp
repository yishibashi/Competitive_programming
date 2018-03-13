#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a;
    int ap, am;
    vector<int> as;

    for (int i = 0; i < N; i++) {
        cin >> a;
        ap = a + 1;
        am = a - 1;
        as.push_back(a);
        as.push_back(ap);
        as.push_back(am);
    }
    sort(as.begin(), as.end());

    int count = 0;
    int tmp = 1;
    for (int i = 0; i < as.size() - 1; ++i) {
        if (as[i] != as[i + 1]) {
            count = max(count, tmp);
            tmp = 1;
        } else {
            ++tmp;
        }
    }

    cout << count << endl;

    return 0;
}
