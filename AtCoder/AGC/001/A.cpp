#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int N; cin >> N;
    vector<int> L;

    for(int i = 0; i < 2*N; i++){
        int tmp; cin >> tmp;
        L.push_back(tmp);
    }

    int ans;
    sort(L.begin(), L.end());

    for(int i = 0; i < 2*N; i += 2){
        ans += min(L[i], L[i+1]);
    }


    cout << ans << endl;

    return 0;
}