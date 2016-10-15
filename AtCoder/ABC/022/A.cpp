#include <iostream>

using namespace std;

int main()
{
    int N, S, T; cin >> N >> S >> T;
    int W; cin >> W;
    int count = 0;

    if(S <= W && W <= T) count++;
    for(int i = 1; i < N; i++){
        int dA; cin >> dA;
        W += dA;
        if(S <= W && W <= T) count++;
    }

    cout << count << endl;

    return 0;
}


