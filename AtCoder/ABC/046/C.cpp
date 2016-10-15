#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include<cmath>

using namespace std;

int main() {
    int N; cin >> N;
    int t, a; cin >> t >> a;
    long long int nt = t, na = a;
    for (int i = 1; i < N; i++) {
        int t, a; cin >> t >> a;
        long long int p = max((nt + t - 1)/ t, (na + a - 1)/ a);
        //long long int p = max(ceil((long double)nt/t), ceil((long double)na/a));
        nt = t * p;
        na = a * p;
    }
    cout << nt+na << endl;
    return 0;
}


