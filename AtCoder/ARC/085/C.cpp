#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int c = 100 * (n - m) + 1900 * m;

    int t = (int)pow(2, m);

    cout << c * t << endl;

    return 0;
}
