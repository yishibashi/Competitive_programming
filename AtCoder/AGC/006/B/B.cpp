#include <iostream>
#include <cstdio>
#include <numeric>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N, x; cin >> N >> x;
    vector<int> ns;
    for(int i = 1; i <= 2*N-1; i++){ns.push_back(i);}

    if(x == 1 || x == 2*N-1) cout<< "No" << endl;
    else{
        cout << "Yes" << endl;
        
        if(x <= ns[N-1]){
            swap(ns[x], ns[N]);
            swap(ns[x-1], ns[N-1]);
            swap(ns[x-2], ns[N-2]);
        }else{
            swap(ns[x-2], ns[N-2]);
            swap(ns[x-1], ns[N-1]);
            swap(ns[x], ns[N]);
        }

        for(int i = 0; i < 2*N-1; i++) cout << ns[i] << endl;

    }

    return 0;
}
