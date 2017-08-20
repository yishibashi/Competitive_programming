#include <iostream>
#include <string>

using namespace std;

int rev(int n) {
    string sn = to_string(n);
    reverse(sn.begin(), sn.end());

    return (int)stoi(sn);
}

int main() {
    int D;
    cin >> D;

    if (D % 9 != 0) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 1; i < INT_MAX; i++) {
        if (rev(i) == i + D) {
            cout << rev(i) << " = " << i << " + " << D << endl;
        }
    }

    return 0;
}
