#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long int N, G, V;
    cin >> N >> G >> V;
    N /= 5;
    double Gas = N*G;

    double ans = Gas / V;
    printf("%.12f\n",ans);
    return 0;
}
