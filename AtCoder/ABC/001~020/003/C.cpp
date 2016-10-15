#include <iostream>
#include <vector>
#include <algorithm>
#include<iomanip>
using namespace std;

int main()
{

    int N, K;
    cin >> N >> K;

    vector<double> R;

    double ri;
    double rate = 0.000000000;

    for(int i = 0; i < N; i++){
        cin >> ri;
        R.push_back(ri);
    }

    sort(R.begin(), R.end());

    for(int i = N-K ; i < N; i++){
        rate = (rate + R[i]) / 2.000000000;
    }

    cout << setprecision(10) << rate  << endl;

    return 0;
}


