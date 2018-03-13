#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a <= 0 && 0 <= b) {
        cout << "Zero" << endl;
    } else if (0 < a) {
        cout << "Positive" << endl;
    } else if (b < 0) {
        if ((b - a) % 2 == 0) {
            cout << "Negative" << endl;
        } else {
            cout << "Positive" << endl;
        }
    }

    return 0;
}
