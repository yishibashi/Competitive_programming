#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    long long int N, X;
    //cin >> N >> X;
    scanf("%lld%lld",&N,&X);
    long long int A = N;
    N -= X;
    while(true){
        if(N > X) swap(N,X);
        if(X%N == 0){
            A += (2*(X/N)*N - N);
            break;
        }
        A += (2*(X/N)*N);
        X %= N;
    }



    cout << A << endl;

    return 0;
}
