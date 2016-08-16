#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int i;
    if (s.size() > 2) {
        for (i = 0; i < s.size(); i++) {
            if (s[i] == s[i + 1] || s[i] == s[i + 2]) {
                cout << i + 1 << " " << i + 3 << endl;
                break;
            }
        }
        if (i == s.size()) cout << -1 << " " << -1 << endl;
    }
    else {
        if(s[0] == s[1]) cout << "1 2" << endl;
        else cout << -1 << " " << -1 << endl;
    }
    return 0;
}