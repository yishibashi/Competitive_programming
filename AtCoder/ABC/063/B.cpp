#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> ss;

    for (char c : s) {
        ss.insert(c);
    }

    if (s.size() == ss.size())
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
