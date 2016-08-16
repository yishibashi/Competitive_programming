#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

struct V{
    char whc;
    int nmb;
};

int main()
{
    int n;
    while (scanf("%d",&n), n) {
        cout << "in" << endl;
        int votes[26] = {0};
        int max1 = -1, max2 = -1;
        int maxitr1 = -1, maxitr2 = -1;

        int i;
        for (i = 0; i < n; ++i) {

            cout << i << endl;
            // 票数++
            char w;
            cin >> w;
            votes[(int) (w - 'A')] += 1;


            /*
            // 配列要素表示
            for (char j = 'A'; j <= 'Z'; ++j) {
                cout << j << " " << votes[(int)(j-'A')] << " / ";
            }cout << endl;
            */

            // set max1
            for (int k = 0; k < 26; ++k) {
                if (max1 < votes[k]) {
                    max1 = votes[k];
                    maxitr1 = k;
                }
            }

            // set max2
            for (int l = 0; l < 26; ++l) {
                if (l != maxitr1 && max2 < votes[l]) {
                    max2 = votes[l];
                    maxitr2 = l;
                }
            }
            /*
            cout << max1 << "/" << maxitr1 << endl;
            cout << max2 << "/" << maxitr2 << endl;
            cout << (n - i - 1) << "---------" << endl;
            */
            if (max1 > (max2 + (n - i - 1)) ) {
                cout << (char) ('A' + maxitr1) << " " << i + 1 << endl;
                i+=n;
            }
            else if ((max1 == max2) && ((n - i - 1) == 0)) {
                cout << "TIE" << endl;
            }
            else;
        }
        cout << "out" << endl;
    }
    return 0;
}