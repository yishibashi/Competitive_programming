#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cstdio>
using namespace std;

int main()
{

    int N;cin >> N;
    int c;
    int n=0;
    double s=0.00000000;
    vector<int> C;


    for(int i = 0; i < N; i++){
        cin >> c;
        C.push_back(c);
    }
    sort(C.begin(), C.end() );

    do{
        vector<int> bit(N,1);
        for(int i =0; i < N; i++){
            for(int j = i+1; j < N; j++){
//                cout << "---------------------" << endl;
//                for(int j = 0; j < N; j++){
//                    cout << bit[j] << " ";
//                }cout << endl;
//                cout << "---------------------" << endl;
                if(C[j]%C[i] == 0){
                    if(bit[j]==1) bit[j]=0;
                    else bit[j]=1;
                }
            }
        }
//        for(int j = 0; j < N; j++){
//            cout << bit[j] << " ";
//        }cout <<"======================"<< endl;

        n++;
        s += accumulate(bit.begin(), bit.end(), 0);
    }while(next_permutation(C.begin(), C.end()) );


//  cout << s/n << " / s: " << s << " n: " << n << endl;
    printf("%.8f\n",s/n);
    return 0;
}
