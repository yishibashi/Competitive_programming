#include <algorithm>
#include <cstdio>
#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int N;
    cin >> N;
    int colors[8] = {};
    int x = 0;
    int cmin = 0, cmax = 0;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;

        if (a <= 399)
            colors[0]++;
        else if (a <= 799)
            colors[1]++;
        else if (a <= 1199)
            colors[2]++;
        else if (a <= 1599)
            colors[3]++;
        else if (a <= 1999)
            colors[4]++;
        else if (a <= 2399)
            colors[5]++;
        else if (a <= 2799)
            colors[6]++;
        else if (a <= 3199)
            colors[7]++;
        else
            x++;
    }
    /*
        for (int i = 0; i < 8; i++) {
            cout << colors[i] << " ";
        }
        cout << endl;
    */
    for (int i = 0; i < 8; i++) {
        if (colors[i] > 0) cmin++;
    }
    cmax = x + cmin;
    cmin = max(cmin, 1);

    printf("%d %d\n", cmin, cmax);

    return 0;
}
