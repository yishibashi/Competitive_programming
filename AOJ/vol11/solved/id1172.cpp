#include<iostream>
#include<vector>

using namespace std;

vector<int> Esieve(int n){
    vector<int> primes;
    vector<bool> sieve(2*n+1, true);
    sieve[0] =  sieve[1] = false;
    for(int i = 2; i <= sieve.size(); i++){
        if (sieve[i] == true){
            primes.push_back(i);
            for(int j = i; j < sieve.size(); j = j+i){
                sieve[j] = false;
            }
        }
    }

    return primes;
}

int main()
{
    int n;
    while(cin>>n && n){
        vector<int> ans;
        vector<int> primes = Esieve(n);
        for(int i = 0; i < primes.size(); i++){
            if(primes[i] > n && primes[i] <= 2*n){
                ans.push_back(primes[i]);
            }
        }
        cout << ans.size() << endl;
    }
    return 0;
}


