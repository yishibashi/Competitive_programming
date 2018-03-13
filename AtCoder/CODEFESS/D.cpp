#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    s += "000";
    vector<int> cnts;
    int cnt = 0;
    int ans = 0;
    int bi = 0, ai = 0;
    for (int i = 0; i < s.size() - 2; ++i) {
        if (s[i] == '1' && s[i + 1] == '1' && cnt == 0) {
            bi++;
        } else if (s[i] == '0' && cnt == 0) {
            bi = 0;
        }

        if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1' && ai == 0) {
            cnt++;
            i += 1;
        } else if (s[i] == '1' && s[i + 1] == '1' && cnt > 0) {
            ai++;
        } else if (s[i] == '1' && s[i + 1] == '0' && cnt > 0) {
            ai++;
        } else {
            cnts.push_back(cnt + max(bi, ai));
            //            cout << bi << " " << cnt << " " << ai << endl;
            cnt = 0, bi = 0, ai = 0;
        }
    }

    for (auto c : cnts) {
        if (c % 2) {
            ans += (c + 1) / 2;
        } else {
            ans += c / 2;
        }
    }

    cout << ans << endl;

    return 0;
}
