#include <algorithm>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main() {
    int i = 0;
    int N;
    cin >> N;
    string s1, s2;
    cin >> s1 >> s2;
    long long int ans = 1;
    bool isVertical;

    if (s1[0] == s2[0]) {
        ans = 3;
        i = 1;
        isVertical = true;
    } else {
        ans = 6;
        i = 2;
        isVertical = false;
    }

    for (i; i < N; i++) {
        if (isVertical) {
            ans = (ans * 2) % 1000000007;
            if (s1[i] != s2[i]) {
                isVertical = false;
                i++;
            }
        } else {
            if (s1[i] == s2[i]) {
                isVertical = true;
            } else {
                ans = (ans * 3) % 1000000007;
                isVertical = false;
                i++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
