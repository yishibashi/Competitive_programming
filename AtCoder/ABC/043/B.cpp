#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s; cin >> s;
    string ans;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0' or s[i] == '1') ans += s[i];
        if(s[i] == 'B') ans.pop_back();
    }

    cout << ans << endl;

    return 0;
}