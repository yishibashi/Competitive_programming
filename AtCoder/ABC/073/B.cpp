#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    int l, r;

    for (int i = 0; i < N; i++) {
        cin >> l >> r;

        sum += (r - l) + 1;
    }

    cout << sum << endl;

    return 0;
}
