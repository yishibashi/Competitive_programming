#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s; cin >> s;
    string ans = "";

    int c = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == s[i+1]) c++;
        else{
            string t = to_string(c);
            ans = ans + s[i] + t;
            c = 1;
        }
    }

    cout << ans << endl;

    return 0;
}

