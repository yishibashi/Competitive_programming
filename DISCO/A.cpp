#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double A, B, C;
    double ans;

    cin >> A >> B >> C;

    ans =  C * B / A;

    printf("%.10f\n",ans);

    return 0;
}
