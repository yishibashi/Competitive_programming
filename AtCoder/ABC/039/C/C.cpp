#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string S;
    cin >> S;
    int count = 1;
    int x = 0;

    map<int, string> scale;
    scale[37] = "Do";
    scale[31] = "Re";
    scale[25] = "Mi";
    scale[41] = "Fa";
    scale[35] = "So";
    scale[29] = "La";
    scale[42] = "Si";

    char tmp = S[0];
    for (int i = 1; i < S.size(); i++) {
        count++;
        if (tmp == S[i]) {
            x += count;
        }
        tmp = S[i];
    }

    cout << scale[x] << endl;

    return 0;

}
