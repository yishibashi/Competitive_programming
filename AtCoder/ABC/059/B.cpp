#include <iostream>
#include  <vector>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{

    string s1, s2;
    cin >> s1 >> s2;
    if(s1.size() > s2.size()){
        cout << "GREATER" << endl;
    }else if (s1.size() < s2.size()){
        cout << "LESS" << endl;
    }else {
        for (int i = 0; i < max(s1.size(), s2.size()); i++) {
            int i1 = s1[i] - '0';
            int i2 = s2[i] - '0';
            if (i1 > i2) {
                cout << "GREATER" << endl;
                break;
            } else if (i1 < i2) {
                cout << "LESS" << endl;
                break;
            } else if (i == max(s1.size(), s2.size()) - 1) {
                cout << "EQUAL" << endl;
            }
        }
    }
    return 0;
}
