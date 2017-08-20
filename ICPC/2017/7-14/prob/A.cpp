#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <numeric>

using namespace std;

int main()
{
    int n ,m;
    vector<int>ss;

    while(cin>>n>>m,n&&m) {

        int ans = 0;
        vector<int>nums;
        int tmp;
        for (int i = 0; i < n; ++i) {
            cin >> tmp;
            nums.push_back(tmp);
        }

        int a, b;
        for (int i = 0; i < nums.size(); ++i) {
            a = nums[i];
            for (int j = i + 1; j < nums.size(); ++j) {
                b = nums[j];
                if (m >= (a + b)) {
                    ans = max(ans, (a + b));
                }
            }
        }
        ss.push_back(ans);
    }

    for(auto e:ss) {
        if(e!=0)
            cout << e << endl;
        else
            cout<<"NONE"<<endl;
    }

    return 0;
}
