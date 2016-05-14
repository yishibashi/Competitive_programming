//ICPC Domestic 2007
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int n;
    int s;
    vector<int> ans;
    while(cin >> n && n){
        for(int i = 0;i < n;i++){
            cin >> s;
            ans.push_back(s);
        }
        sort(ans.begin(), ans.end());
        cout << accumulate(ans.begin()+1, ans.end()-1, 0) / (n-2) << endl;
        ans.clear();
    }
    return 0;
}

