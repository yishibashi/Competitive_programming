#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m,n;
    while(cin >> m >> n, m&&n){
        vector<int> sieve(7400000,0);
        for (int i = 0; i < sieve.size(); ++i) sieve[i] = i;
        for (int i = 0; i < m; ++i) sieve[i] = 0;

        int count = 1;
        for(int j = m; j < sieve.size(); j++){
            if(count > n) break;
            if(sieve[j] != 0) {
                count++;
                for (int k = sieve[j]; k < sieve.size(); k = k + j) {
                    sieve[k] = 0;
                }
            }
        }

        for (int l = 0; l < sieve.size(); ++l) {
            if(sieve[l] != 0){
                cout << sieve[l] << endl;
                break;
            }
        }

    }
    return 0;
}