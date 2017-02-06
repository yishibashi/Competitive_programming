#include <iostream>
using namespace std;

int main()
{
    int n,x; cin >> n >> x;

    cout << min(abs(n-x),abs(x-1)) << endl;

    return 0;
}