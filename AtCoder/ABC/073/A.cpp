#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    for (auto s : N) {
        if (s == '9') {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}
