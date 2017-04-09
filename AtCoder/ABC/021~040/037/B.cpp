#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >>  Q;
    vector<int> an(N,0);


    for (int i=1;i<=Q;i++){
        int Li, Ri, Ti;
        cin >> Li >> Ri >> Ti;
        for (int j = Li-1; j < Ri; j++){
            an[j] = Ti;
        }
    }

    for (int i=0;i<N;i++){
        cout << an[i] <<endl;
    }

    return 0;
}
