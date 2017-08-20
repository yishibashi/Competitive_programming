#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s1, s2;

    while (cin >> s1, s1 != ".") {
        cin >> s2;

        string tmps1, tmps2;
        vector<pair<int, string> > s1s;
        vector<pair<int, string> > s2s;

        if (s1 == s2) {
            cout << "IDENTICAL" << endl;
            continue;
        }

        int lr = 1;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != '"') {
                tmps1 += s1[i];
            } else {
                if (lr % 2 == 1) {
                    s1s.push_back(make_pair(0, tmps1));
                    lr++;
                } else {
                    s1s.push_back(make_pair(1, tmps1));
                    lr = 1;
                }
                tmps1 = "";
            }
            if(i==s1.size()-1&&s1[i]!='"')
                s1s.push_back(make_pair(0, tmps1));
        }

        lr = 1;
        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] != '"') {
                tmps2 += s2[i];
            } else {
                if (lr % 2 == 1) {
                    s2s.push_back(make_pair(0, tmps2));
                    lr++;
                } else {
                    s2s.push_back(make_pair(1, tmps2));
                    lr = 1;
                }
                tmps2 = "";
            }
            if(i==s2.size()-1&&s2[i]!='"')
                s2s.push_back(make_pair(0, tmps2));
        }


        // check
        int vecs1_size = s1s.size();
        int vecs2_size = s2s.size();
        int miss_n = 0;
        if (vecs1_size != vecs2_size) {
            cout << "DIFFERENT" << endl;
            continue;
        }

        bool flag = false;
        for (int i = 0; i < vecs1_size; i++) {
            if (s1s[i].second != s2s[i].second && s1s[i].first == 1 &&
                s2s[i].first == 1) {
                miss_n++;
            } else if (s1s[i].second != s2s[i].second && s1s[i].first == 0 &&
                       s2s[i].first == 0) {
                cout << "DIFFERENT" << endl;
                flag = true;
                break;
            }
        }
        if (flag) continue;

        if (miss_n > 1)
            cout << "DIFFERENT" << endl;
        else
            cout << "CLOSE" << endl;



/*
        cout << "!! ---" << endl;
        for (auto p : s1s) {
            cout << p.first << " " << p.second << endl;
        }
        cout << "---" << endl;
        for (auto p : s2s) {
            cout << p.first << " " << p.second << endl;
        }
        //cout << "miss " << miss_n << endl;
        */

    }

    return 0;
}
