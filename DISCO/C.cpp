#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

int gcd( int m, int n )
{
    if ((0 == m) || (0 == n))
        return 0;
    while( m != n )
    {
        if(m > n){m = m - n;}
        else{n = n - m;}
    }
    return m;
}




int main()
{

    int N, K; cin >> N >> K;
    vector<int> ns;
    vector<bool> frag;

    long long int ans = 0;
    int size_N = N;

    for(int i = 0; i < size_N; i++){
        int tmp;
        cin>>tmp;
        if(tmp % K == 0){
            --N;
            ans += N;
        }else if(gcd(tmp, K) != 1){
            ns.push_back(gcd(tmp, K));
        }
    }


    for(int i = 0; i < ns.size(); i++) {
        for (int j = i+1; j < ns.size(); j++) {
            if ((ns[i] * ns[j]) % K == 0) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
