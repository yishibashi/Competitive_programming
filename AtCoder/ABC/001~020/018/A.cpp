#include<iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if(A>B || A>C){
        if(A>B && A>C) cout << "1" << endl;
        else cout << "2" << endl;
    }
    else cout << "3" << endl;

    if(B>A || B>C){
        if(B>A && B>C) cout << "1" << endl;
        else cout << "2" << endl;
    }
    else cout << "3" << endl;


    if(C>A || C>B){
        if(C>B && C>A) cout << "1" << endl;
        else cout << "2" << endl;
    }
    else cout << "3" << endl;

    return 0;
}


