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
    double ans=0.0;
    vector<int> C;


    for(int i = 0; i < N; i++){
        cin >> c;
        C.push_back(c);
    }

    for(int i = 0; i < N; i++){
        int num = 0;
        for(int j = 0; j < N; j++){
            if(C[i]%C[j]==0 && j!=i) num+=1;
        }
        if(num%2==0) ans += (num+2.0) / (2*num+2.0);
        else ans += 0.5;
    }


    printf("%.8f\n",ans);
    return 0;
}
