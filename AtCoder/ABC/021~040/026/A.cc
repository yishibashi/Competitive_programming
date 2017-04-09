#include <iostream>
using namespace std;
int main()
{
    int A; cin >> A;
    int ans = 0;
    for(int i = 1; i <= A; i++){
        ans = max(i * (A-i), ans);
    }
    cout << ans << endl;
    return 0;
}
