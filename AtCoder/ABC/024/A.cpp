#include<iostream>


using namespace std;

int main()
{
    int A,B,C,K; cin>>A>>B>>C>>K;
    int S,T; cin>>S>>T;

    if(S+T>=K) cout << S*(A-C)+T*(B-C) << endl;
    else cout << S*A+T*B << endl;

    return 0;
}
