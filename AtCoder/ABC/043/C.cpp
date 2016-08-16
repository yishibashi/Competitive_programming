#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {

    int N; cin >> N;
    int min, max, ans;
    vector<int> A;

    for (int i = 0; i < N; i++) {
        int tmp; cin >> tmp;
        A.push_back(tmp);
    }

    ans = 100*100*101;
    min = *min_element(A.begin(), A.end());
    max = *max_element(A.begin(), A.end());

    for (int j=min-1;j<=max+1;j++) {
        int tmp_ans = 0;
        for (int i=0;i<N;i++) {
            tmp_ans+=((j-A[i])*(j-A[i]));
        }
        if(ans>tmp_ans) ans=tmp_ans;
    }
    cout << ans << endl;
    return 0;
}