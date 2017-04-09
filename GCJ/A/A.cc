#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

char flip(char w){
    if(w == '+') return '-';
    else return '+';
}


int main() {
    int T, K; cin >> T;
    string S;

    for (int i = 1; i <= T; i++) {
        cin >> S >> K;
        int count = 0;
        for (int i = 0; i <= S.size() - K; i++) {
            if (S[i] == '-') {
                for(int j = 0; j < K; j++){
                    S[i+j] = flip(S[i+j]);
                }
                count++;
            }

        }

        bool flag = true;
        for (int i = 0; i < S.size(); i++) {
            if (S[i] != '+') {
                flag = false;
                break;
            }
        }
        cout << "Case #" << i << ": ";
        if (flag) cout << count << endl;
        else cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}

