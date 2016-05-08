#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int N, K;
    cin >> N >> K;
    long int ai;
    vector<long > an;
    for(int i = 0; i < N; i++){
        cin >> ai;
        an.push_back(ai);
    }
    long long  ans = 0;
    for(int i = 0; i < N-K+1; i++){
        for(int j = 0; j < K; j++){
            ans += an[i+j];
        }
    }
    cout << ans << endl;
    return 0;
}
