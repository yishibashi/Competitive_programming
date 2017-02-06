#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int r, n, m; cin >> r >> n >> m;
    double sum = 0;

    //double c = ceil(n / 2);
    double c = n / 2.0;

    for(int i = 1; i <= n+m-1; i++) {

        double pos1 = abs(c - i);
        double pos2 = abs(c - (i - m));

        double ct1 = 2.0 * r * sqrt(1.0 - (pos1 / c) * (pos1 / c));
        double ct2 = 2.0 * r * sqrt(1.0 - (pos2 / c) * (pos2 / c));

        if(pos1 < 0.0 || (c < pos1)) {ct1 = 0.0;}
        if(pos2 < 0.0 || (c < pos2)) {ct2 = 0.0;}
        sum += max(ct1, ct2);
    }

    printf("%.10f\n",sum);
}