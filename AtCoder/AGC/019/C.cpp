#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <vector>

#define PI 3.1415926535897932384

using namespace std;

bool pairCompare(const std::pair<int, int> &firstElem,
                 const std::pair<float, int> &secondElem) {
    return firstElem.first < secondElem.first;
}

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int N;
    cin >> N;

    vector<pair<int, int> > dots;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        if (((x1 <= x && x <= x2) || (x2 <= x && x <= x1)) &&
            ((y1 <= y && y <= y2) || (y2 <= y && y <= y1))) {
            dots.push_back(make_pair(x, y));
        }
    }

    sort(dots.begin(), dots.end(), pairCompare);

    int fountaiN = 0;
    if (dots.size() > 0) {
        fountaiN++;

        for (int i = 0; i < dots.size() - 1; i++) {
            if (x1 <= x2 && y1 <= y2 && dots[i].second <= dots[i + 1].second) {
                fountaiN++;
            } else if (x1 <= x2 && y2 <= y1 &&
                       dots[i].second >= dots[i + 1].second) {
                fountaiN++;
            } else if (x1 >= x2 && y1 >= x2 &&
                       dots[i].second <= dots[i + 1].second) {
                fountaiN++;
            } else if (x2 <= x1 && y2 >= y1 &&
                       dots[i].second >= dots[i + 1].second) {
                fountaiN++;
            } else if (dots[i].first == dots[i + 1].first) {
                fountaiN++;
            }
        }
    }

    double ans;
    if (x1 != x2 && y1 != y2) {
        if (fountaiN == 1) {
            ans = 100 * abs(x2 - x1) + 100 * abs(y2 - y1) + (5.0 * PI - 20.0);
        } else if (fountaiN >= 2) {
            ans = 100 * abs(x2 - x1) + 100 * abs(y2 - y1) +
                  2.0 * (5.0 * PI - 20.0);
        } else {
            ans = 100 * abs(x2 - x1) + 100 * abs(y2 - y1);
        }
    } else {
        if (fountaiN >= 1) {
            ans = 100 * abs(x2 - x1) + 100 * abs(y2 - y1) + (10.0 * PI - 20.0);
        } else {
            ans = 100 * abs(x2 - x1) + 100 * abs(y2 - y1);
        }
    }

    printf("%.15f\n", ans);

    return 0;
}
