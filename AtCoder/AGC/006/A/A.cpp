#include <iostream>
#include <cstdio>
#include <numeric>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int N; cin >> N;
    string s, t; cin >> s >> t;


    for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        int n=i, m=j;
        while(s[n] == t[m] && n < N){
          n++;
          m++;
        }
        x = max(x, n-i);
        y = max(y, m);
      }
    }
    //cout << x << " " << (N-y) << endl;

    if(x == N && y == N) cout << N << endl;
    else if (x == 0 && y == 0) cout << 2*N << endl;
    else cout << N + (N-x) << endl;


    return 0;
}
