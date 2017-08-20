#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        vector<int> ssize;
        string s;
        for (int i = 0; i < n; i++) {
            cin >> s;
            ssize.push_back(s.size());
        }
    }

    return 0;
}
