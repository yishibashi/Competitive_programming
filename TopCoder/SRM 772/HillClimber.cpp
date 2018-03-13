#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HillClimber {
   public:
    int longest(vector<int> height) {
        int ans = 0;
        int tmp = 0;
        for (int i = 1; i < height.size(); i++) {
            if (height[i - 1] < height[i]) {
                tmp++;
            } else {
                ans = max(ans, tmp);
                tmp = 0;
            }
        }
        return max(ans, tmp);
    }
};

/*
int main() {
    HillClimber h = HillClimber();

    vector<int> ex1 = {1, 2, 2, 3};
    cout << h.longest(ex1) << endl;

    vector<int> ex2 = {1, 8, 9, 12};
    cout << h.longest(ex2) << endl;

    vector<int> ex3 = {10, 4, 4, 2};
    cout << h.longest(ex3) << endl;

    vector<int> ex4 = {10, 8, 4, 9, 11, 14, 15, 3, 7, 8, 10, 6};
    cout << h.longest(ex4) << endl;

    return 0;
}
*/
