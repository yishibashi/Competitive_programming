#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {

    long long int N, K; cin >> N >> K;
    long long int ans;
    ans =  (long long int) K * pow((K-1),(N-1));
    printf("%lld\n",ans);
    return 0;
}
