#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size() - 8; i++) cout << s[i];
    cout << endl;

    return 0;
}
