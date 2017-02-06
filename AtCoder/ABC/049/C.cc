#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string S; cin >> S;
    
    bool check;

    string tmp;
    for(int i = 0; i < S.size(); i++){
        tmp += S[i];

        if(tmp == "dream"){
            if(S[i+1] == 'e' && S[i+2] == 'r' && S[i+3] != 'a'){
                i += 2;
            }
            tmp = "";
        }else if(tmp == "erase"){
            if(S[i+1] == 'r'){
                i += 1;
            }
            tmp = "";
        }
    }
    check = tmp.empty();
    
    if(check){ cout << "YES" << endl; }
    else{ cout << "NO" << endl; }

    return 0;
}
