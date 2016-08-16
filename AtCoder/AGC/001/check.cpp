#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;

int64_t gcd(int64_t x, int64_t y)
{
    if (x % y == 0)
        return y;
    else
        return gcd(y, x % y);
}

int main()
{
    int64_t N, X;
    //cin >> N >> X;

    for(int i = 2; i < 20; i++) {
        for (int j = 1; j < i; j++) {
            int64_t line = (i - 1) * 3;
            cout << line - (gcd(i, j) - 1) * 3 << endl;
        }
    }
    return 0;
}
