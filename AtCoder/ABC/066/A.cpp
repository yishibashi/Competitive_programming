#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
#include <stack>
#include <queue>

using namespace std;

int main()
{

    int a, b, c; cin >> a >> b >> c;


    cout << min(a+b, min(b+c, c+a)) << endl;
    return 0;
}