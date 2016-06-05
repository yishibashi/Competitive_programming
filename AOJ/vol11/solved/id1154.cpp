#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int N;

    vector<vector<int> > factors(300000);
    for(int i = 0 ;; i++){
        int d1 = 7*i + 1;
        int d2 = 7*i + 6;
        if(d1 > 300000) break;

        if(i != 0 && factors[d1].empty()){
            for(int j = d1; j < 300000; j+=d1){
                factors[j].push_back(d1);
            }
        }

        if(factors[d2].empty()){
            for(int j = d2; j < 300000; j+=d2){
                factors[j].push_back(d2);
            }
        }
    }


    while(cin >> N && N!=1){

        cout << N << ":";

        for(int k : factors[N]){
            cout<< ' ' << k;
        }
        cout << endl;
    }

    return 0;
}
