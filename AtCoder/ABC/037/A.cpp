#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A,B,C; cin >> A >> B >> C;

    int mini = min(A, B);
    int lrge = max(A,B);


    cout << C/mini + ((C-(C/mini)*mini) / lrge) << endl;

    return 0;
}

