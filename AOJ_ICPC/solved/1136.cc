#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x;
    int y;
};

vector<int> st1;
vector<int> st2;

vector<int> init_vec() {
    vector<Point> ps;
    vector<int> st;
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        Point p;
        p.x = a;
        p.y = b;
        ps.push_back(p);
    }
    for (int i = 1; i < n - 1; i++) {
        int x1 = ps[i - 1].x;
        int y1 = ps[i - 1].y;
        int x2 = ps[i].x;
        int y2 = ps[i].y;
        int x3 = ps[i + 1].x;
        int y3 = ps[i + 1].y;
        st.push_back(abs(x1 - x2) + abs(y1 - y2));
        int dx1 = x2 - x1;
        int dy1 = y2 - y1;
        int dx2 = x3 - x2;
        int dy2 = y3 - y2;
        if ((dy1 > 0 && dx2 > 0) || (dx1 > 0 && dy2 < 0) ||
            (dy1 < 0 && dx2 < 0) || (dx1 < 0 && dy2 > 0)) {
            st.push_back(1);
        } else {
            st.push_back(-1);
        }
    }
    return st;
}

bool isSameVec(vector<int> v1, vector<int> v2) {
    bool flag = true;
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; v1.size(); i++) {
        // 逆からチェックするときは曲がる方向が逆になる？
        if ((v1[i] != v2[i]) && (v1[i] != v2[v2.size() - 1 - i])) {
            flag = false;
        }
    }
    return flag;
}

int main() {
    int n, ans;
    while (cin >> n, n) {
        ans = 0;
        st1 = init_vec();
        for (int i = 1; i <= n; i++) {
            st2 = init_vec();
            if (isSameVec(st1, st2)) cout << i << endl;
        }
        cout << "+++++" << endl;
    }

    return 0;
}
