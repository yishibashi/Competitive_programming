#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int c = S.size() / 2;
    int ans;

    for (int i = 0; i <= c; i++) {
        if (i % 3 == 1 && (S[c - i] != 'a' || S[c + i] != 'c')) {
            cout << (ans = -1) << endl;
            break;
        } else if (i % 3 == 2 && (S[c - i] != 'c' || S[c + i] != 'a')) {
            cout << (ans = -1) << endl;
            break;
        } else if (i % 3 == 0 && (S[c - i] != 'b' || S[c + i] != 'b')) {
            cout << (ans = -1) << endl;
            break;
        }
        ans = i;
    }
    if (ans >= 0) {
        cout << ans << endl;
    }

    return 0;
}
