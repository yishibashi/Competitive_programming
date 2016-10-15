#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int N; cin >> N;
    int b, c;
    b = c = 0;
    int a = 1;
    int ans = 1;
    int tmp = 0;

    int anss[4] = {0,0,1,1};
    if (N <= 4){
        ans = anss[N-1];
    }

    while(N > 4){
        tmp = a;
        a = ans;
        swap(tmp, b);
        c = tmp;
        ans = (a + b + c) % 10007;
        N--;
    }

    cout << ans << endl;

    return 0;
}



