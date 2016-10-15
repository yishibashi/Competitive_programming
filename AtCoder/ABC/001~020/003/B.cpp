#include<iostream>
#include<string>
#include<map>

using namespace std;


int main()
{
    map<string, string> att;

    att["a"] = "@";
    att["t"] = "@";
    att["c"] = "@";
    att["o"] = "@";
    att["d"] = "@";
    att["e"] = "@";
    att["r"] = "@";

    string S, T;
    cin >> S >> T;

    string tmpS, tmpT;
    for (int i = 0; i < S.size(); i++){

        tmpS = S[i], tmpT = T[i];
        if ( tmpS != tmpT && !(att[tmpS] == tmpT || att[tmpT] == tmpS) ){
            cout << "You will lose" << endl;
            break;
        }
        if ( i == S.size() - 1) cout << "You can win" << endl;
    }

    return 0;
}

