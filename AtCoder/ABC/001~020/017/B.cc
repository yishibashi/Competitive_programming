#include <iostream>
#include <string>
using namespace std;

int main()
{
    string X; cin >> X;
    bool cl=true;
    for(int i = 0; i < X.size(); i++){
        if(X[i] == 'c' && X[i+1] == 'h'){ i++; }
        else if(X[i] == 'o' || X[i] == 'k' || X[i] == 'u') continue;
        else { cl = false; break; }
    }

    if(cl) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
