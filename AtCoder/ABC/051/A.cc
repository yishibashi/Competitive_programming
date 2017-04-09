#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ss; cin >> ss;
    for(char s: ss){
        if(s != ',') cout << s;
        else cout << " ";
    }
    cout << endl;

    return 0;
}
