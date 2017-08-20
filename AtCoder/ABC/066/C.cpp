#include <algorithm>
#include <iostream>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ns;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (i % 2 == 0)
            ns.push_back(a);
        else
            ns.insert(ns.begin(), a);
    }

    if (ns.size() % 2 == 1) reverse(ns.begin(), ns.end());

    for (auto c : ns) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
