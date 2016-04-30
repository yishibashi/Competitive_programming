#include <iostream>
using namespace std;

int main()
{
    int Y; cin >> Y;

    if (Y % 400 == 0) cout << "YES" << endl;
    else if (Y % 100 == 0) cout << "NO" << endl;
    else if (Y % 4 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

