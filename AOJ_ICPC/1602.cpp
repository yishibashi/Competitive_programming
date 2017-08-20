#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;

vector<string> s;
typedef pair<int, char> P;
vector<P> exps;

bool isdigit(char c) { return '0' <= c && c <= '9'; }
int cnt = 0;
int solve(int d, int i) {
    int val;
    cout << exps[i].first << " " << exps[i].second << endl;
    cout << "cnt " << ++cnt << endl;
    // if(!isdigit(exps[i].second)){
    if (exps[i].second == '+') {
        val = 0;
        for (int j = i + 1; j < exps.size(); j++) {
            if (isdigit(exps[j].second) && exps[j].first == d + 1) {
                val += exps[j].second - '0';
            } else if (!isdigit(exps[j].second && exps[j].first == d + 1)) {
                val += solve(exps[j].first, j);
                while (exps[j].first != d + 1 && j < exps.size()) {
                    j++;
                }
            } else return val;
        }
    } else if (exps[i].second == '*') {
        val = 1;
        for (int j = i + 1; j < exps.size(); j++) {
            if (isdigit(exps[j].second) && exps[j].first == d + 1) {
                val *= exps[j].second - '0';
            } else if (!isdigit(exps[j].second && exps[j].first == d + 1)) {
                val *= solve(exps[j].first, j);
                while (exps[j].first != d + 1 && j < exps.size()) {
                    j++;
                }
            } else return val;
        }
    } else {
        val = exps[i].second - '0';
    }
    cout << "cnt" << cnt << "! " << val << endl;
    return val;
}

P parse(string s) {
    char c;
    int d = 0;
    for (char cc : s) {
        if (cc == '.')
            d++;
        else
            c = cc;
    }
    return P(d, c);
}

int main() {
    int n;
    while (cin >> n, n) {
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            P p = parse(s);
            exps.push_back(p);
        }
        cout << solve(0, 0) << endl;
        exps.erase(exps.begin(), exps.end());
    }
    return 0;
}
