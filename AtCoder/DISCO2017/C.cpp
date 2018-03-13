#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    int N, C; cin >> N >> C;
    int ans = 0;
    vector<int> ls;
    for(int i = 0; i < N; i++){
        int l; cin >> l;
        ls.push_back(l);
    }
    sort(ls.begin(), ls.end());

    int l = 0;
    int r = ls.size() - 1;


    while(l < r) {

        if (ls[l] + ls[r] + 1 <= C) {
            ans++;
            l++;
            r--;
        } else if (ls[l] + ls[r] + 1 > C) {
            ans++;
            r--;
        }
    }
    if(l == r) ans++;
    cout << ans << endl;

    return 0;
}
