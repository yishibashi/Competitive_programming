#include <iostream>
using namespace std;

int main()
{
    int a,b; cin >> a >> b;

    cout << min(abs(b-a), min((9-a)+(b-0)+1, (9-b)+(a-0)+1)) << endl;

    return 0;
}
