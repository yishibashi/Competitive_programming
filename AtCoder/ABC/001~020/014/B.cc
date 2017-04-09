#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    int n, X; cin >> n >> X;
    int pow2 = pow(2,n-1);
    int sum = 0;
    vector<int> as;

    for(int i = 0; i < n; i++){
        int a_i; cin >> a_i;
        as.push_back(a_i);
    }

    for(int i = n-1; i >= 0; i--){
        if(X >= pow2){
            sum += as[i];
            X -= pow2;
        }
        pow2 /= 2;
    }

    cout << sum << endl;
    return 0;
}
