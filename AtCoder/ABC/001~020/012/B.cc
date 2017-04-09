#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N; cin >> N;
    int h = N / 3600;
    int m = (N % 3600) / 60; 
    int s = ((N % 3600) % 60);

    printf("%02d:%02d:%02d\n",h,m,s);

    return 0;
}
