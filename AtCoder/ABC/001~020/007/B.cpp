#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A;
    getline(cin, A);
    if (A.size() > 1){
        for (int i = 0; i < A.size()-1; i++){
            cout << A[i];
        }
        cout << endl;
    }
    if(A.size() == 1 && A == "a") cout << -1 << endl;
    else if(A.size() == 1 && A != "a") cout << "a" << endl;

    return 0;
}
