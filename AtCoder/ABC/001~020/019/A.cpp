#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;

    int center = min(min(max(c,a), max(a,b)), min(max(a,b), max(b,c)));

    cout << center << endl;

    return 0;
}
