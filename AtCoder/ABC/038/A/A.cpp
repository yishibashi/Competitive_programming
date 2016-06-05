#include<iostream>
#include<string>

using namespace std;

int main()
{

    string str; cin >> str;

    if(str[str.size()-1] == 'T') cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

