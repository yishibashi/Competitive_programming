#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

struct S{
    char alp;
    int nvotes;
};

int main() {
    vector<S> votes;
    while(true) {

        int n;
        scanf("%d",&n);
        cout << n << endl;
        if(n==0) break;
        int np = n;
        int max1, max2;
        char v = 0x00;
        // 初期化
        votes.clear();
        for (char j = 'A'; j <= 'Z'; ++j) {
            votes.push_back(S{j,0});
        }

        // 票を受け取る
        for (int i = 0; i < n; ++i) {
            cin >> v;
            int m = (int) (v - 'A');
            votes[m].nvotes += 1;

            vector<int> rank;
            for (int j = 0; j < 26; ++j) {
                rank.push_back(votes[j].nvotes);
            }
            sort(rank.begin(), rank.end(),greater<int>());
            max1 = rank[0];
            max2 = rank[1];
            rank.clear();
            if(max1 > (max2 + np-i-1)){
                cout << v << " " << i+1 << endl;
                break;
            }
            else if(max1 == max2 && np-i-1 == 0){
                cout << "TIE" << endl;
                break;
            }
        }
    }
    return 0;
}