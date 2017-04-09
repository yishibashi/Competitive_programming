#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    bool sp = true;
    int N; cin >> N;
    int a, b; cin >> a >> b;

    int K; cin >> K;
    vector<int> paths;
    for(int i = 0; i < K; i++){
        int t; cin >> t;
        paths.push_back(t);
        if(t == a || t == b){
            sp = false;
            break;
        }
    }
    if(sp == true){
        sort(paths.begin(), paths.end());
        for(int i = 1; i < paths.size(); i ++){
            if(paths[i] == paths[i-1]){
                sp = false;
                break;
            }
        }
    }

    if(sp==true) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

