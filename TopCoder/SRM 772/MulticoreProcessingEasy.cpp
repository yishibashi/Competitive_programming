#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MulticoreProcessingEasy {
   public:
    int fastestTime(int jobLength, int corePenalty, vector<int> speed,
                    vector<int> cores) {
        int t = 1000000000;

        for (int i = 0; i < speed.size(); i++) {
            for (int c = 1; c <= cores[i]; c++) {
                double tmp = 1.0 * jobLength / (c * speed[i]);
                int val = (int)ceil(tmp) + (corePenalty * (c - 1));
                t = min(t, val);
            }
        }
        return t;
    }
};

int main() {
    MulticoreProcessingEasy mp;

    int l = 2000;
    int cp = 5;
    vector<int> sp = {40, 20};
    vector<int> c = {2, 4};
    cout << mp.fastestTime(l, cp, sp, c) << endl;

    return 0;
}
