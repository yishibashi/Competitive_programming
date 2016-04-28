#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N,M;
    int x, y;
    vector<int> iky(12,0);  // iky = {0,0,...,0}
    cin >> N >> M;
    for (int i = 0; i < M; i++){
        cin >> x >> y;
        iky[x-1] += 1;
    }
    int ans;
    ans = *max_element(iky.begin(), iky.end());
    cout << ans+1 << endl;
    return 0;
}

