#include <iostream>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> ns;

    for (int i = 0; i < N; i++) {
        int s;
        cin >> s;
        if (!ns.count(s)) {
            ns.insert(s);
        } else {
            ns.erase(s);
        }
    }

    cout << ns.size() << endl;

    return 0;
}
