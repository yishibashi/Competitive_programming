#include<iostream>
#include<string>
using namespace std;


int main()
{

    string S = "abcdefghijklnmopqrstuvwxyz";

    if(S[0] == 'a') cout << "true" << endl;
    if(S[0] == 'b' ||S[0] ==  'a') cout << "true" << endl;


    return 0;
}
