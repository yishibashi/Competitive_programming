#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a, b; cin >> a >> b;
    string c = a + b;

    int ans = 2 * stoi(c);

    cout << ans << endl;

    return 0;
}


